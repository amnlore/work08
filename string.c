int mystrlen( char *s ) {
    int i = 0;
    while (*(s + i) != 0) {
        i++;
    }
    return i;
}

char * mystrcpy( char *dest, char *source ) {
    int i = 0;
    while (*(source + i)) {
        *(dest + i) = *(source + i);
        i++;
    }
    return dest;
}

char * mystrncpy( char *dest, char *source , int n ) {
    int i = 0;
    while (*(source + i) && i < n) {
        *(dest + i) = *(source + i);
        i++;
    }
    return dest;
}

char * mystrcat( char *dest, char *source ) {
    int i = 0;
    int l = mystrlen(dest);
    while (*(source + i)) {
        *(dest + l + i) = *(source + i);
        i++;
    }
    return dest;
}

char * mystrncat( char *dest, char *source, int n ) {
    int i = 0;
    int l = mystrlen(dest);
    while (*(source + i) && i < n) {
        *(dest + l + i) = *(source + i);
        i++;
    }
    return dest;
}


int mystrcmp( char *s1, char *s2 ) {
    while (*s1 || *s2) {
        if (*s1 > *s2) return 1;
        else if (*s1 < *s2) return -1;
        else if (*s1 == 0 && *s2 != 0) return -1;
        else if (*s1 != 0 && *s2 == 0) return 1;
        else if (*s1 == 0 && *s2 == 0) return 0;
        s1++;
        s2++;
    }
    return 0;
}

char * mystrchr( char *s, char c ) {
    while (*s) {
        if (*s == c) return s;
        s++;
    }
    if (c == 0) return s;
    return 0;
}
