#pragma once
#include <cstdarg>
class RandomForest {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[3] = { 0 };
                        // tree #1
                        if (x[8] <= -44.5) {
                            if (x[1] <= -54.0) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[4] <= -92.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= -47.5) {
                                if (x[2] <= -61.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #2
                        if (x[4] <= -88.0) {
                            if (x[2] <= -64.0) {
                                if (x[2] <= -72.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[1] <= -47.5) {
                                if (x[2] <= -62.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[1] <= -52.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= -41.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[6] <= -43.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= -90.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #3
                        if (x[2] <= -54.0) {
                            if (x[1] <= -54.5) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[7] <= -82.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[3] <= -91.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[6] <= -42.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= -45.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= -69.5) {
                                                    if (x[2] <= -72.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #4
                        if (x[8] <= -44.5) {
                            if (x[12] <= -45.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[1] <= -46.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[2] <= -61.0) {
                                if (x[2] <= -68.0) {
                                    if (x[4] <= -47.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #5
                        if (x[0] <= -42.5) {
                            if (x[4] <= -43.0) {
                                if (x[2] <= -62.5) {
                                    if (x[1] <= -43.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[6] <= -45.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[0] <= -44.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= -49.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #6
                        if (x[0] <= -42.5) {
                            if (x[8] <= -43.0) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[1] <= -45.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #7
                        if (x[2] <= -66.0) {
                            if (x[1] <= -43.0) {
                                if (x[0] <= -41.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[2] <= -55.5) {
                                if (x[8] <= -43.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= -44.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= -47.5) {
                                            if (x[0] <= -36.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #8
                        if (x[2] <= -61.0) {
                            if (x[0] <= -42.5) {
                                if (x[8] <= -43.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[3] <= -89.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[7] <= -42.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[0] <= -41.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #9
                        if (x[4] <= -43.0) {
                            if (x[3] <= -44.5) {
                                if (x[3] <= -90.5) {
                                    if (x[2] <= -72.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[2] <= -62.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= -86.5) {
                                if (x[2] <= -51.5) {
                                    if (x[0] <= -42.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[8] <= -45.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= -65.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= -36.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[5] <= -42.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= -44.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #10
                        if (x[4] <= -43.0) {
                            if (x[2] <= -59.0) {
                                if (x[5] <= -44.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[4] <= -91.0) {
                                        if (x[2] <= -72.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[1] <= -52.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #11
                        if (x[2] <= -61.0) {
                            if (x[0] <= -39.0) {
                                if (x[0] <= -44.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[1] <= -47.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[2] <= -55.5) {
                                if (x[3] <= -43.5) {
                                    if (x[8] <= -45.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #12
                        if (x[8] <= -43.5) {
                            if (x[1] <= -51.5) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[0] <= -45.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[5] <= -88.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[7] <= -42.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[0] <= -45.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= -43.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= -65.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #13
                        if (x[2] <= -55.5) {
                            if (x[0] <= -36.0) {
                                if (x[12] <= -45.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= -63.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[0] <= -45.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #14
                        if (x[3] <= -40.0) {
                            if (x[6] <= -44.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= -61.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[8] <= -45.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[7] <= -42.0) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[4] <= -43.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #15
                        if (x[7] <= -42.0) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[3] <= -88.0) {
                                if (x[1] <= -51.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[5] <= -89.5) {
                                        if (x[1] <= -47.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[8] <= -45.0) {
                                    if (x[0] <= -47.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= -61.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #16
                        if (x[0] <= -42.5) {
                            if (x[2] <= -58.5) {
                                if (x[8] <= -43.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[1] <= -50.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #17
                        if (x[0] <= -42.5) {
                            if (x[0] <= -44.0) {
                                if (x[7] <= -43.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[0] <= -53.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= -90.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[4] <= -92.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[6] <= -45.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[4] <= -43.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[2] <= -65.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[5] <= -89.5) {
                                if (x[3] <= -91.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #18
                        if (x[8] <= -43.0) {
                            if (x[0] <= -42.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[7] <= -42.0) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[2] <= -60.0) {
                                    if (x[0] <= -39.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #19
                        if (x[5] <= -87.0) {
                            if (x[3] <= -91.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[2] <= -63.5) {
                                if (x[2] <= -68.0) {
                                    if (x[9] <= -45.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[6] <= -43.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[8] <= -45.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[2] <= -55.5) {
                                    if (x[2] <= -57.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #20
                        if (x[6] <= -43.0) {
                            if (x[3] <= -45.0) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[2] <= -55.5) {
                                if (x[0] <= -36.5) {
                                    if (x[2] <= -63.0) {
                                        if (x[2] <= -72.0) {
                                            if (x[1] <= -51.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 3; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                    /**
                    * Predict readable class name
                    */
                    const char* predictLabel(float *x) {
                        return idxToLabel(predict(x));
                    }

                    /**
                    * Convert class idx to readable name
                    */
                    const char* idxToLabel(uint8_t classIdx) {
                        switch (classIdx) {
                            case 0:
                            return "hallway";
                            case 1:
                            return "kitchen";
                            case 2:
                            return "meeting room";
                            default:
                            return "Houston we have a problem";
                        }
                    }

                protected:
                };