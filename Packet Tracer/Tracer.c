#include <stdio.h>
#include <pcap.h>
#include <netinet/ip.h>
#include <netinet/tcp.h>

// Callback function to process each captured packet
void packet_handler(unsigned char *user_data, const struct pcap_pkthdr *pkthdr, const unsigned char *packet) {
    struct ip *ip_header = (struct ip *)(packet + 14);  // Skip Ethernet header
    struct tcphdr *tcp_header = (struct tcphdr *)(packet + 14 + (ip_header->ip_hl << 2));  // Skip IP header

    // Display the source and destination IP addresses
    printf("Source IP: %s\n", inet_ntoa(ip_header->ip_src));
    printf("Destination IP: %s\n", inet_ntoa(ip_header->ip_dst));

    // Display source and destination ports if it's a TCP packet
    if (ip_header->ip_p == IPPROTO_TCP) {
        printf("Source Port: %d\n", ntohs(tcp_header->th_sport));
        printf("Destination Port: %d\n", ntohs(tcp_header->th_dport));
    }

    printf("\n");
}

int main() {
    pcap_t *handle;               // Handle for packet capture
    char errbuf[PCAP_ERRBUF_SIZE]; // Error buffer
    char *dev;                     // Network device to listen on

    // Find a network device to listen on
    dev = pcap_lookupdev(errbuf);
    if (dev == NULL) {
        fprintf(stderr, "Device not found: %s\n", errbuf);
        return 1;
    }

    // Open the device for packet capture in promiscuous mode
    handle = pcap_open_live(dev, BUFSIZ, 1, 1000, errbuf);
    if (handle == NULL) {
        fprintf(stderr, "Error opening device: %s\n", errbuf);
        return 1;
    }

    // Start capturing packets and call the packet_handler function for each packet
    if (pcap_loop(handle, 0, packet_handler, NULL) < 0) {
        fprintf(stderr, "Error in pcap_loop: %s\n", pcap_geterr(handle));
        return 1;
    }

    // Close the capture handle
    pcap_close(handle);
    return 0;
}
