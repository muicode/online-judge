long long sum(std::vector<int> &a)
{   
    long long t = 0;
    for (int i=0; i<a.size; ++i)
    {
        t += a[i];
    }

    return t;
}
