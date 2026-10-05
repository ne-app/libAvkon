// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Ne.app. All rights reserved
// Official repository: https://github.com/ne-app/adb

#include <ne_app/core/pdf.hpp>
#include <benchmark/registration.h>
#include <benchmark/state.h>

static void BM_RenderHTML(benchmark::State& state) {
  for (auto _ : state) {
    /// TODO: Do heavy stuff with the sample PDF. Don't handle exceptions.
     ::ne_app::html::render("sample.html", ::strlen("sample.html"));
  }
}

BENCHMARK(BM_RenderHTML);
BENCHMARK_MAIN();
