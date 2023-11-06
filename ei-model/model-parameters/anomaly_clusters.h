/* Generated by Edge Impulse
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_
#define _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_

#include "edge-impulse-sdk/anomaly/anomaly.h"

// (before - mean) / scale
const float ei_classifier_anom_scale[EI_CLASSIFIER_ANOM_AXIS_SIZE] = { 4.735934431428502, 2.6370697886685024, 1.752289641283062 };
const float ei_classifier_anom_mean[EI_CLASSIFIER_ANOM_AXIS_SIZE] = { 4.292335472136911, 2.1852703082689375, 1.6949875804138423 };

const ei_classifier_anom_cluster_t ei_classifier_anom_clusters[EI_CLASSIFIER_ANOM_CLUSTER_COUNT] = { { { 1.1627247333526611, -0.09127187728881836, 0.039932578802108765 }, 0.45766612185692546 }
, { { 1.0793125629425049, -0.35539326071739197, -0.25196555256843567 }, 0.393853330260634 }
, { { -0.6699717044830322, -0.025066491216421127, 1.8257455825805664 }, 0.4076753010490145 }
, { { -0.905547022819519, -0.8271730542182922, -0.9636279940605164 }, 0.07057358582419748 }
, { { -0.6083683967590332, 0.3378922939300537, -0.2750750780105591 }, 0.34529380833031026 }
, { { 1.8524712324142456, -0.011566506698727608, 0.8461854457855225 }, 0.432528610593013 }
, { { 1.3358670473098755, -0.05726705491542816, -0.43816810846328735 }, 0.5062860278160605 }
, { { -0.7409022450447083, -0.34725621342658997, -0.8029352426528931 }, 0.21884703625369306 }
, { { -0.503063440322876, -0.3759881258010864, 2.3207943439483643 }, 0.7885827511063271 }
, { { -0.6956930160522461, -0.3123343288898468, 1.5905060768127441 }, 0.39691538375970054 }
, { { 0.7493807077407837, 2.8090922832489014, 0.8038313388824463 }, 0.4756844734737089 }
, { { -0.6844053864479065, -0.14970919489860535, -0.8244701623916626 }, 0.26707199648543406 }
, { { 1.5486040115356445, 0.7133833765983582, 0.5105420351028442 }, 0.4487223169579444 }
, { { 1.7191046476364136, 0.2774096429347992, 0.3952651917934418 }, 0.4223370205546866 }
, { { -0.5709540247917175, 0.6095415353775024, 0.03743164613842964 }, 0.5761022260100517 }
, { { -0.7589687705039978, -0.5149730443954468, 1.1454917192459106 }, 0.41873647710696993 }
, { { -0.03281811252236366, 3.856318950653076, -0.06501699984073639 }, 0.4937528681009911 }
, { { 0.9676327705383301, 3.318385362625122, 1.194267749786377 }, 0.3862170996134061 }
, { { -0.31564873456954956, 1.6312458515167236, 0.08470914512872696 }, 0.5464022209211731 }
, { { -0.4383845925331116, 3.3809237480163574, -0.20014718174934387 }, 0.5178456874700895 }
, { { -0.7231196761131287, -0.3596212565898895, -0.5751107335090637 }, 0.2102935035976298 }
, { { -0.5922588109970093, 0.08036672323942184, 1.3690720796585083 }, 0.4210207540244469 }
, { { 1.2505220174789429, 0.2934052348136902, -0.31634294986724854 }, 0.4438873246997636 }
, { { -0.4361991286277771, -0.1800207793712616, 2.741694450378418 }, 0.7265706160475239 }
, { { 0.9043402075767517, -0.10142571479082108, 0.8351730704307556 }, 0.5526395773058033 }
, { { 0.945662260055542, -0.027204414829611778, -0.3570230305194855 }, 0.37494576737715907 }
, { { 1.8591350317001343, 0.09516841173171997, 1.431195616722107 }, 0.5613021315333133 }
, { { -0.14796173572540283, 3.592709541320801, -0.3852364122867584 }, 0.46899416758090073 }
, { { 1.414710521697998, 0.6246669888496399, -0.007774942554533482 }, 0.46243669139995136 }
, { { 1.2696725130081177, -0.39998090267181396, 0.6421909332275391 }, 0.3975097018500365 }
, { { -0.12758338451385498, 1.1125560998916626, 0.7232611775398254 }, 0.672883066503446 }
, { { -0.2525366246700287, 1.0297623872756958, 2.618793249130249 }, 0.8520370623106243 }
};

#endif // _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_
