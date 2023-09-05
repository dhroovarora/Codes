https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1






vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                                vector<long long> ans;
                                                queue<long long> q;
                                                long long int w = 0;
                                                long long int i = 0;
                                                for(;i<K;++i){
                                                    if(A[i] < 0)
                                                        q.push(A[i]);
                                                    if(i == K-1){
                                                        if(!q.empty())
                                                            ans.push_back(q.front());
                                                        else
                                                            ans.push_back(0);
                                                    }
                                                }
                                                for(;i<N;++i){
                                                     if(A[i] < 0)
                                                        q.push(A[i]);
                                                    if(!q.empty() && A[w] == q.front())
                                                        q.pop();
                                                    if(!q.empty())
                                                        ans.push_back(q.front());
                                                    else
                                                        ans.push_back(0);
                                                    ++w;
                                                }
                                             return ans;
                                            }