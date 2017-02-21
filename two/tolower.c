/* tolower: change integer to lowercase letter */
int tolower(int s)
{

    if (s >= 'A' && s <= 'Z')
        return s + 'a' - 'A';
    else
        return s;
}
