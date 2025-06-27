#include "../includes/ping_utils.h"

/*
returns 0 if the ip has a valid format, else 1
*/
int validate_ipv4(char *ip) {
    char    **octet_ip_list = ft_split(ip, '.');
    bool    error = false;
    int     i = -1;

    while (octet_ip_list[++i]) {
        printf("%ld: %s\n", ft_strlen(octet_ip_list[i]), octet_ip_list[i]);
        if (!ft_isdigit(octet_ip_list) || ft_strlen()
    }
    printf("i:%d\n", i);
    free_split(octet_ip_list);
    if (i != 4) {
        fprintf(stderr, "ping: %s: Name or service not known\n", ip);
        exit(2);
    }
    return 0;
}