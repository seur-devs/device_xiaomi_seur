/*
 * Copyright (C) 2021-2022 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_variant.h>
#include <libinit_utils.h>

#include "vendor_init.h"


static const variant_info_t sea_info = {
    .hwc_value = "",
    .sku_value = "ksrn",

    .brand = "Redmi",
    .device = "sea",
    .marketname = "Redmi Note 12S",
    .model = "23030RAC7Y",
    .build_fingerprint = "Redmi/sea_global/sea:13/SP1A.210812.016/V816.0.7.0.UHZMIXM:user/release-keys",
};

static const variant_info_t ocean_info = {
    .hwc_value = "",
    .sku_value = "k7sr",

    .brand = "Redmi",
    .device = "ocean",
    .marketname = "Redmi Note 12S",
    .model = "2303CRA44A",
    .build_fingerprint = "Redmi/ocean_global/ocean:13/SP1A.210812.016/V816.0.7.0.UHZMIXM:user/release-keys",
};

static const variant_info_t ocean_la_info = {
    .hwc_value = "",
    .sku_value = "ksrl",

    .brand = "Redmi",
    .device = "ocean",
    .marketname = "Redmi Note 12S",
    .model = "2303ERA42L",
    .build_fingerprint = "Redmi/ocean_global/ocean:13/SP1A.210812.016/V816.0.7.0.UHZMIXM:user/release-keys",
};

static const variant_info_t fleur_info = {
    .hwc_value = "",
    .sku_value = "fleur",

    .brand = "Redmi",
    .device = "fleur",
    .marketname = "Redmi Note 11S",
    .model = "2201117SY",
    .build_fingerprint = "Redmi/fleur_global/fleur:13/SP1A.210812.016/V816.0.2.0.TKEMIXM:user/release-keys",
};

static const variant_info_t miel_info = {
    .hwc_value = "",
    .sku_value = "miel",

    .brand = "Redmi",
    .device = "miel",
    .marketname = "Redmi Note 11S",
    .model = "2201117SG",
    .build_fingerprint = "Redmi/miel_global/miel:13/SP1A.210812.016/V816.0.2.0.TKEMIXM:user/release-keys",
};

static const variant_info_t fleur_p_info = {
    .hwc_value = "",
    .sku_value = "fleurp",

    .brand = "POCO",
    .device = "fleur",
    .marketname = "POCO M4 Pro",
    .model = "2201117PG",
    .build_fingerprint = "POCO/fleur_p_global/fleur:13/SP1A.210812.016/V816.0.2.0.TKEMIXM:user/release-keys",
};

static const variant_info_t miel_p_info = {
    .hwc_value = "",
    .sku_value = "mielp",

    .brand = "POCO",
    .device = "miel",
    .marketname = "POCO M4 Pro",
    .model = "2201117PI",
    .build_fingerprint = "POCO/miel_p_global/miel:13/SP1A.210812.016/V816.0.2.0.TKEMIXM:user/release-keys",
};

static const std::vector<variant_info_t> variants = {
    sea_info,
    ocean_info,
    ocean_la_info,
    fleur_info,
    miel_info,
    fleur_p_info,
    miel_p_info,
};

void vendor_load_properties() {
    search_variant(variants);
}
