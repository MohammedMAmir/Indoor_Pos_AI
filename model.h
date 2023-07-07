#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForest {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[4] = { 0 };
                        // tree #1
                        if (x[10] <= -45.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[5] <= -35.5) {
                                if (x[1] <= -55.5) {
                                    if (x[1] <= -60.5) {
                                        if (x[3] <= -78.0) {
                                            if (x[1] <= -61.5) {
                                                if (x[2] <= -66.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= -85.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= -62.5) {
                                                if (x[1] <= -70.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[0] <= -51.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[9] <= -44.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[6] <= -47.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= -75.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[2] <= -63.5) {
                                                        if (x[4] <= -83.5) {
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
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= -79.5) {
                                        if (x[5] <= -86.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= -44.0) {
                                    if (x[1] <= -60.5) {
                                        if (x[7] <= -46.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= -71.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= -78.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[2] <= -70.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #2
                        if (x[3] <= -82.5) {
                            if (x[2] <= -66.0) {
                                if (x[2] <= -88.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[0] <= -51.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[1] <= -56.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[5] <= -80.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= -62.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= -57.5) {
                                if (x[2] <= -79.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[5] <= -89.5) {
                                        if (x[1] <= -63.5) {
                                            if (x[3] <= -73.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= -68.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= -59.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[5] <= -35.5) {
                                            if (x[2] <= -72.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[0] <= -48.5) {
                                                    if (x[1] <= -61.0) {
                                                        if (x[5] <= -87.0) {
                                                            votes[1] += 1;
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
                                        }

                                        else {
                                            if (x[3] <= -68.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[5] <= -37.5) {
                                    if (x[4] <= -90.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= -48.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= -51.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[7] <= -44.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= -46.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[3] <= -73.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #3
                        if (x[5] <= -35.5) {
                            if (x[3] <= -82.5) {
                                if (x[5] <= -85.0) {
                                    if (x[0] <= -48.5) {
                                        if (x[5] <= -93.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[2] <= -67.5) {
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
                                    if (x[2] <= -66.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[4] <= -75.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= -48.5) {
                                    if (x[1] <= -55.0) {
                                        if (x[7] <= -89.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= -73.5) {
                                                if (x[0] <= -51.5) {
                                                    if (x[4] <= -77.5) {
                                                        if (x[5] <= -85.5) {
                                                            if (x[4] <= -92.0) {
                                                                votes[3] += 1;
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
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= -75.0) {
                                                        if (x[4] <= -89.5) {
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
                                    if (x[0] <= -42.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= -73.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[4] <= -37.0) {
                                if (x[2] <= -82.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[11] <= -43.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= -77.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[7] <= -46.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[4] <= -86.5) {
                                                    if (x[2] <= -68.5) {
                                                        votes[3] += 1;
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
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #4
                        if (x[0] <= -51.5) {
                            if (x[3] <= -81.5) {
                                if (x[2] <= -71.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[1] <= -62.5) {
                                        if (x[0] <= -55.0) {
                                            votes[1] += 1;
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

                            else {
                                if (x[10] <= -45.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= -58.0) {
                                        if (x[1] <= -71.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[3] <= -68.0) {
                                                if (x[4] <= -77.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= -74.0) {
                                            if (x[4] <= -86.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= -75.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[5] <= -46.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[9] <= -42.0) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[3] <= -79.5) {
                                    if (x[4] <= -81.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= -59.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= -44.5) {
                                                if (x[1] <= -53.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= -34.0) {
                                        if (x[5] <= -92.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= -65.5) {
                                                if (x[0] <= -50.0) {
                                                    if (x[4] <= -88.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= -70.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= -49.5) {
                                                    if (x[2] <= -76.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[5] <= -39.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= -42.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        // tree #5
                        if (x[3] <= -82.5) {
                            if (x[2] <= -66.0) {
                                if (x[5] <= -38.5) {
                                    if (x[3] <= -86.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[9] <= -44.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[4] <= -75.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[5] <= -85.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[5] <= -80.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= -88.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= -79.5) {
                                if (x[0] <= -51.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[9] <= -42.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[10] <= -46.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= -44.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= -55.0) {
                                    if (x[7] <= -89.0) {
                                        if (x[5] <= -44.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= -87.0) {
                                            if (x[0] <= -49.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= -61.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= -48.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= -68.5) {
                                                if (x[2] <= -63.5) {
                                                    if (x[0] <= -50.0) {
                                                        if (x[1] <= -58.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[5] <= -39.5) {
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
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= -52.5) {
                                        if (x[4] <= -88.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #6
                        if (x[3] <= -82.5) {
                            if (x[2] <= -66.0) {
                                if (x[0] <= -51.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[2] <= -79.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[6] <= -47.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= -62.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= -57.5) {
                                if (x[0] <= -49.5) {
                                    if (x[10] <= -47.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[9] <= -44.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[2] <= -72.5) {
                                                if (x[0] <= -58.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[0] <= -53.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= -81.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= -51.5) {
                                                    if (x[5] <= -44.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[4] <= -46.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= -70.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= -59.0) {
                                        if (x[2] <= -60.5) {
                                            if (x[5] <= -39.5) {
                                                votes[1] += 1;
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
                            }

                            else {
                                if (x[3] <= -73.5) {
                                    if (x[4] <= -90.0) {
                                        if (x[0] <= -47.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= -79.5) {
                                            if (x[2] <= -72.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= -69.5) {
                                        if (x[0] <= -53.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[9] <= -42.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[7] <= -44.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        // tree #7
                        if (x[2] <= -71.5) {
                            if (x[5] <= -35.5) {
                                if (x[1] <= -57.5) {
                                    if (x[4] <= -90.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= -73.5) {
                                        if (x[3] <= -88.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= -43.5) {
                                    if (x[7] <= -44.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[4] <= -42.5) {
                                            if (x[10] <= -45.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[9] <= -45.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[4] <= -30.5) {
                                if (x[0] <= -48.5) {
                                    if (x[7] <= -89.0) {
                                        if (x[2] <= -60.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= -68.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[8] <= -46.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= -61.5) {
                                                    if (x[3] <= -72.5) {
                                                        if (x[4] <= -83.0) {
                                                            if (x[0] <= -49.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
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
                                votes[3] += 1;
                            }
                        }

                        // tree #8
                        if (x[5] <= -35.5) {
                            if (x[2] <= -73.0) {
                                if (x[4] <= -86.0) {
                                    if (x[2] <= -78.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= -50.0) {
                                        if (x[1] <= -57.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[0] <= -58.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= -48.5) {
                                    if (x[0] <= -56.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[7] <= -89.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= -84.5) {
                                                if (x[0] <= -53.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= -49.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= -60.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[10] <= -45.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[7] <= -44.5) {
                                    if (x[7] <= -91.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= -37.0) {
                                        if (x[1] <= -60.0) {
                                            if (x[0] <= -53.0) {
                                                if (x[0] <= -55.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        // tree #9
                        if (x[3] <= -82.5) {
                            if (x[5] <= -38.5) {
                                if (x[3] <= -88.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[1] <= -63.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[2] <= -77.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[5] <= -87.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= -48.0) {
                                                    if (x[0] <= -54.5) {
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
                                    }
                                }
                            }

                            else {
                                if (x[3] <= -87.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[5] <= -35.5) {
                                if (x[8] <= -46.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[5] <= -89.5) {
                                        if (x[5] <= -91.5) {
                                            if (x[2] <= -78.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[0] <= -50.0) {
                                                    if (x[2] <= -72.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= -62.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= -59.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= -69.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[9] <= -44.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[1] <= -64.5) {
                                                    if (x[1] <= -67.0) {
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
                                    }
                                }
                            }

                            else {
                                if (x[1] <= -60.0) {
                                    if (x[3] <= -79.5) {
                                        if (x[1] <= -71.0) {
                                            votes[3] += 1;
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
                                    if (x[7] <= -44.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= -79.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[0] <= -46.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #10
                        if (x[3] <= -82.5) {
                            if (x[1] <= -63.5) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[2] <= -67.0) {
                                    if (x[3] <= -86.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[2] <= -84.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[2] <= -77.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= -56.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[5] <= -35.5) {
                                if (x[5] <= -89.5) {
                                    if (x[0] <= -44.5) {
                                        if (x[2] <= -78.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= -63.5) {
                                                if (x[3] <= -73.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= -73.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= -48.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= -87.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= -69.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[9] <= -44.5) {
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
                                if (x[4] <= -37.0) {
                                    if (x[3] <= -77.5) {
                                        if (x[7] <= -46.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= -80.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[3] <= -79.5) {
                                                    if (x[4] <= -92.5) {
                                                        if (x[9] <= -44.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= -79.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        // tree #11
                        if (x[2] <= -71.5) {
                            if (x[10] <= -45.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[3] <= -82.5) {
                                    if (x[1] <= -56.0) {
                                        if (x[2] <= -85.5) {
                                            if (x[1] <= -59.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= -53.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= -52.5) {
                                        if (x[0] <= -44.5) {
                                            if (x[2] <= -79.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[9] <= -44.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[5] <= -80.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= -75.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[9] <= -42.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[0] <= -60.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= -48.5) {
                                if (x[0] <= -57.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[2] <= -28.0) {
                                        if (x[2] <= -62.5) {
                                            if (x[2] <= -69.5) {
                                                if (x[2] <= -70.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[4] <= -81.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[7] <= -45.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= -71.5) {
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
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #12
                        if (x[3] <= -82.5) {
                            if (x[2] <= -66.0) {
                                if (x[4] <= -89.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[0] <= -48.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[1] <= -53.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= -62.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[10] <= -45.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[9] <= -42.0) {
                                    if (x[5] <= -35.5) {
                                        if (x[4] <= -74.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= -79.0) {
                                        if (x[1] <= -53.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[0] <= -52.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= -48.5) {
                                            if (x[1] <= -69.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[5] <= -89.5) {
                                                    if (x[4] <= -89.0) {
                                                        if (x[1] <= -60.5) {
                                                            votes[1] += 1;
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
                                                    if (x[1] <= -63.5) {
                                                        if (x[5] <= -87.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[7] <= -44.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[5] <= -37.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[11] <= -43.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[4] <= -88.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[3] <= -71.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= -45.0) {
                                                            votes[1] += 1;
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
                            }
                        }

                        // tree #13
                        if (x[3] <= -82.5) {
                            if (x[5] <= -38.5) {
                                if (x[6] <= -47.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= -51.5) {
                                        if (x[2] <= -66.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[2] <= -61.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= -65.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= -74.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= -57.5) {
                                if (x[4] <= -91.0) {
                                    if (x[3] <= -77.0) {
                                        if (x[2] <= -73.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= -51.5) {
                                        if (x[4] <= -77.0) {
                                            if (x[10] <= -47.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= -64.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[4] <= -31.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= -68.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[6] <= -47.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= -62.5) {
                                                    if (x[5] <= -39.5) {
                                                        if (x[1] <= -59.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= -70.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
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
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= -81.5) {
                                    if (x[4] <= -40.0) {
                                        if (x[9] <= -42.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[2] <= -89.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= -61.5) {
                                        if (x[0] <= -37.0) {
                                            if (x[5] <= -37.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= -78.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= -29.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #14
                        if (x[0] <= -54.5) {
                            if (x[4] <= -85.0) {
                                if (x[3] <= -78.0) {
                                    if (x[1] <= -55.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= -75.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= -69.0) {
                                    if (x[2] <= -88.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= -85.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[10] <= -47.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= -79.5) {
                                if (x[4] <= -40.0) {
                                    if (x[4] <= -86.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[3] <= -84.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[2] <= -62.5) {
                                    if (x[1] <= -57.5) {
                                        if (x[2] <= -69.5) {
                                            if (x[7] <= -44.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= -83.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[0] <= -51.0) {
                                                        if (x[3] <= -81.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= -59.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[5] <= -87.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[4] <= -81.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= -67.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[5] <= -37.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= -78.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= -51.5) {
                                        if (x[0] <= -53.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[5] <= -46.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[4] <= -42.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #15
                        if (x[5] <= -35.5) {
                            if (x[0] <= -51.5) {
                                if (x[4] <= -86.0) {
                                    if (x[1] <= -65.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[10] <= -45.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= -69.0) {
                                        if (x[9] <= -44.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[1] <= -57.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[3] <= -85.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= -62.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= -48.5) {
                                    if (x[2] <= -62.5) {
                                        if (x[0] <= -49.5) {
                                            if (x[5] <= -89.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
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
                                    if (x[0] <= -42.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= -39.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= -68.5) {
                                if (x[2] <= -82.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[0] <= -49.0) {
                                        if (x[10] <= -46.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[11] <= -43.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= -57.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= -52.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[0] <= -40.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #16
                        if (x[3] <= -82.5) {
                            if (x[3] <= -86.5) {
                                if (x[2] <= -67.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[5] <= -39.0) {
                                    if (x[2] <= -66.0) {
                                        if (x[1] <= -56.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= -56.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= -57.5) {
                                if (x[4] <= -76.5) {
                                    if (x[4] <= -91.0) {
                                        if (x[3] <= -81.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= -69.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= -89.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[7] <= -89.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[4] <= -83.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= -64.0) {
                                                        if (x[2] <= -67.0) {
                                                            if (x[1] <= -62.0) {
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

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= -35.5) {
                                        if (x[5] <= -85.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[2] <= -72.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= -60.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= -81.5) {
                                    if (x[5] <= -40.5) {
                                        if (x[3] <= -75.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= -61.5) {
                                        if (x[3] <= -73.5) {
                                            if (x[2] <= -75.5) {
                                                if (x[4] <= -87.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[7] <= -44.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= -70.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #17
                        if (x[0] <= -51.5) {
                            if (x[4] <= -31.0) {
                                if (x[4] <= -79.5) {
                                    if (x[2] <= -72.5) {
                                        if (x[2] <= -79.5) {
                                            if (x[0] <= -53.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= -58.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= -79.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= -54.5) {
                                            if (x[3] <= -79.0) {
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
                                }

                                else {
                                    if (x[4] <= -75.0) {
                                        if (x[1] <= -55.5) {
                                            if (x[3] <= -86.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[2] <= -72.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[0] <= -56.5) {
                                                        votes[1] += 1;
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

                                    else {
                                        if (x[1] <= -54.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[5] <= -39.5) {
                                if (x[2] <= -62.5) {
                                    if (x[9] <= -42.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[5] <= -89.5) {
                                            if (x[2] <= -68.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[1] <= -60.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[10] <= -45.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[7] <= -44.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #18
                        if (x[1] <= -57.5) {
                            if (x[9] <= -44.5) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[2] <= -71.5) {
                                    if (x[5] <= -39.0) {
                                        if (x[4] <= -90.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= -74.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= -39.5) {
                                        if (x[0] <= -48.5) {
                                            if (x[7] <= -89.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= -84.5) {
                                                    if (x[0] <= -53.0) {
                                                        if (x[0] <= -56.0) {
                                                            votes[1] += 1;
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
                                                    if (x[1] <= -62.5) {
                                                        if (x[5] <= -87.0) {
                                                            if (x[5] <= -89.5) {
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
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= -60.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[5] <= -37.5) {
                                if (x[9] <= -42.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[2] <= -61.5) {
                                        if (x[1] <= -56.0) {
                                            if (x[4] <= -69.0) {
                                                if (x[3] <= -83.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[11] <= -43.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[10] <= -45.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        // tree #19
                        if (x[5] <= -35.5) {
                            if (x[10] <= -45.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[3] <= -79.5) {
                                    if (x[2] <= -73.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[4] <= -82.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= -61.5) {
                                                if (x[2] <= -69.0) {
                                                    if (x[0] <= -48.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= -89.5) {
                                        if (x[2] <= -76.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[5] <= -91.5) {
                                                if (x[5] <= -92.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[4] <= -91.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= -48.5) {
                                            if (x[8] <= -46.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[9] <= -44.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[4] <= -87.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[4] <= -37.0) {
                                if (x[3] <= -77.5) {
                                    if (x[2] <= -69.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[11] <= -43.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[4] <= -79.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #20
                        if (x[3] <= -82.5) {
                            if (x[0] <= -51.5) {
                                if (x[2] <= -66.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[4] <= -80.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= -56.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= -79.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[2] <= -65.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[9] <= -42.0) {
                                if (x[1] <= -57.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[2] <= -89.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[2] <= -62.5) {
                                        if (x[1] <= -57.5) {
                                            if (x[3] <= -79.5) {
                                                if (x[2] <= -81.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[4] <= -81.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[4] <= -93.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[8] <= -46.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[4] <= -84.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= -70.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[4] <= -88.0) {
                                                if (x[3] <= -78.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[5] <= -43.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[4] <= -46.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 4; i++) {
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
                            return "boardroom";
                            case 1:
                            return "hallway";
                            case 2:
                            return "kitchen";
                            case 3:
                            return "lab";
                            default:
                            return "Houston we have a problem";
                        }
                    }

                protected:
                };
            }
        }
    }
char dictionary[12][30] = {"HE-2.4G-ground", "BELL154", "ESP8266_TWO", "ESP8266_ONE", "ESP8266_THREE", "ESP8266_FOUR", "Rogers443", "DIRECT-E8-HP ENVY Photo 7100", "NETGEAR00", "SantosIG", "Turbo", "NETGEAR"};
#define DICTIONARY_SIZE 12