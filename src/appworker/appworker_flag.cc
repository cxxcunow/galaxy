// Copyright (c) 2016, Baidu.com, Inc. All Rights Reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
#include <gflags/gflags.h>

// nexus
DEFINE_string(nexus_addr, "127.0.0.1:8868", "server list of nexus, e.g abc.com:1234,def.com:5342");
DEFINE_string(nexus_root_path, "/baidu/galaxy", "root path of galaxy cluster on nexus, e.g /ps/galaxy");

// appmaster
DEFINE_string(appmaster_nexus_path, "appmaster", "appmaster path on nexus");

// appworker
DEFINE_int32(appworker_fetch_task_timeout, 10000, "appworker fetch task timeout");
DEFINE_int32(appworker_fetch_task_interval, 2000, "appworker fetch task interval");
DEFINE_int32(appworker_background_thread_pool_size, 5, "appworker background trehad pool size");
DEFINE_string(tag, "", "appworker tag, show appworker detail in command line ");
DEFINE_string(appworker_agent_hostname_env, "BAIDU_GALAXY_AGENT_HOSTNAME", "agent hostname env name");
DEFINE_string(appworker_agent_ip_env, "BAIDU_GALAXY_AGENT_IP", "agent ip env name");
DEFINE_string(appworker_agent_port_env, "BAIDU_GALAXY_AGENT_PORT", "agent port env name");
DEFINE_string(appworker_job_id_env, "BAIDU_GALAXY_CONTAINERGROUP_ID", "job id env name");
DEFINE_string(appworker_pod_id_env, "BAIDU_GALAXY_CONTAINER_ID", "pod id env name");
DEFINE_string(appworker_user_env, "BAIDU_GALAXY_CONTAINER_USER", "pod run user env name");
DEFINE_string(appworker_task_ids_env, "BAIDU_GALAXY_CONTAINER_CGROUP_IDS", "task ids env name");
DEFINE_string(appworker_cgroup_subsystems_env, "BAIDU_GALAXY_CGROUP_SUBSYSTEMS", "cgroup subsystems env names");
DEFINE_string(appworker_exit_file, ".exit", "appworker exit file");

// pod_manager
DEFINE_int32(pod_manager_change_pod_status_interval, 500, "pod manager check pod status change interval");

// task_manager
DEFINE_int32(task_manager_background_thread_pool_size, 10, "task manager background thread pool size");
DEFINE_int32(task_manager_task_stop_command_timeout, 100, "task manager stop command run timeout second");
DEFINE_int32(task_manager_task_max_fail_retry_times, 10, "task fail retry times limit");

// process_manager
DEFINE_int32(process_manager_loop_wait_interval, 500, "process manager loop wait processes interval");
