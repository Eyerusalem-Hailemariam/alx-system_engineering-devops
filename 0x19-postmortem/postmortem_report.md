ostmortem Report: Outage of Web Application XYZ

Issue Summary:

Duration of Outage: June 12, 2024, 14:00 - 17:30 UTC
Impact: The primary web application (XYZ) was down. Users experienced 500 Internal Server Errors when trying to access the website. Approximately 85% of users were affected.
Root Cause: A misconfiguration in the load balancer caused traffic to be directed to a non-functional backend server.
Timeline:

14:00 UTC: Issue detected by monitoring system alert (high error rates).
14:05 UTC: Alert verified by on-call engineer.
14:10 UTC: Initial investigation focused on application servers. Suspected cause: server overload.
14:30 UTC: Application servers checked; no issues found. Misleading assumption: application servers were functioning normally.
15:00 UTC: Network team notified to investigate potential load balancer issues.
15:30 UTC: Network team identified misconfiguration in load balancer settings.
16:00 UTC: Escalation to senior network engineer for detailed analysis.
16:45 UTC: Configuration error corrected; load balancer settings updated.
17:00 UTC: Testing conducted to ensure proper traffic distribution.
17:30 UTC: Full service restored; monitoring system confirmed resolution.
Root Cause and Resolution:

Root Cause: The load balancer was incorrectly configured to route traffic to a decommissioned backend server. This misconfiguration occurred during a routine maintenance update where new backend servers were added, but the old servers were not properly removed from the load balancer's configuration.
Resolution: The network team updated the load balancer configuration to remove the non-functional backend server and correctly route traffic to the new servers. This involved editing the configuration files and restarting the load balancer to apply changes. Extensive testing was done post-configuration to ensure that all traffic was being appropriately routed.
Corrective and Preventative Measures:

Improvements/Fixes:

Review and improve the load balancer configuration update process.
Enhance monitoring to include load balancer routing checks.
Implement better logging and alerting for misrouted traffic.
Specific Tasks:

Task 1: Conduct a comprehensive review of load balancer configurations and document standard operating procedures for updates.
Task 2: Develop and deploy additional monitoring tools to check the health and routing accuracy of load balancers.
Task 3: Implement automated alerts for traffic anomalies, such as sudden spikes in error rates from specific backend servers.
Task 4: Train network and application teams on the new procedures and tools to ensure swift identification and resolution of similar issues in the future.
Task 5: Schedule regular audits of load balancer configurations to prevent recurrence of similar issues.
