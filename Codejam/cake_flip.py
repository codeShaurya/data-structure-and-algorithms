
def main():
    t = input()
    o = 1
    while(o <= t):
        s, k = raw_input().split()
        s = list(s)
        k = int(k)
        l = len(s)
        count = 0
        for i in range(0, l):
            if(s[i] == "-"):
                if l - i  < k:
                    count = -1
                    break;
                else: 
                    m = (i + k) 
                    for j in range(i,m):
                        if(s[j] == "-"):
                            s[j] = "+"
                        else:
                            s[j] = "-"
                    
                    count = count + 1
                    #print "Case #%d: %d" %(t,count)
            else:
                continue
                

        if(count >= 0):
            print "Case #%d: %d "%(o,count)
        else:
            print "Case #%d: " %(o) + "IMPOSSIBLE"
        
        
        count = 0

        o = o + 1



if __name__ == "__main__":
    main()


