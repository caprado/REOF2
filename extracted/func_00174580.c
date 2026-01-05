void func_00174580() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x50;                                            // 0x00174580: addiu $sp, $sp, -0x50
    s0 = *(int32_t*)((s5) + 0x2ab0);                            // 0x001745a4: lw $s0, 0x2ab0($s5)
    v0 = *(int32_t*)(s0);                                       // 0x001745a8: lw $v0, 0($s0)
    s3 = s0 + 0xc;                                              // 0x001745ac: addiu $s3, $s0, 0xc
    s4 = s0 + 0x8a0;                                            // 0x001745b0: addiu $s4, $s0, 0x8a0
    s1 = s0 + 0xac4;                                            // 0x001745b4: addiu $s1, $s0, 0xac4
    if (v0 != 0) goto label_0x1746c0;                           // 0x001745b8: bnez $v0, 0x1746c0
    s2 = s0 + 0xcfc;                                            // 0x001745bc: addiu $s2, $s0, 0xcfc
    func_001746e8();  // 1746e8                                // 0x001745c4: jal 0x1746e8
    /* bnezl $v0, 0x1746c4 */                                   // 0x001745cc: bnezl $v0, 0x1746c4
    func_00174768();  // 174768                                // 0x001745dc: jal 0x174768
    a2 = sp + 4;                                                // 0x001745e0: addiu $a2, $sp, 4
    /* bnezl $v0, 0x1746c4 */                                   // 0x001745e4: bnezl $v0, 0x1746c4
    func_001747e8();  // 1747e8                                // 0x001745ec: jal 0x1747e8
    if (v0 == 0) goto label_0x174680;                           // 0x001745f4: beqz $v0, 0x174680
    v0 = 1;                                                     // 0x001745f8: addiu $v0, $zero, 1
    *(uint32_t*)(s4) = v0;                                      // 0x001745fc: sw $v0, 0($s4)
    v1 = *(int32_t*)(s3);                                       // 0x00174600: lw $v1, 0($s3)
    /* beqzl $v1, 0x174674 */                                   // 0x00174604: beqzl $v1, 0x174674
    a1 = *(int32_t*)((s4) + 4);                                 // 0x00174608: lw $a1, 4($s4)
    v0 = *(int32_t*)((s3) + 0xc);                               // 0x0017460c: lw $v0, 0xc($s3)
    if (v0 <= 0) goto label_0x174640;                           // 0x00174610: blez $v0, 0x174640
    /* nop */                                                   // 0x00174614: nop 
    a0 = *(int32_t*)((s0) + 0xdb0);                             // 0x00174618: lw $a0, 0xdb0($s0)
    if (a0 <= 0) goto label_0x174634;                           // 0x0017461c: blez $a0, 0x174634
    a2 = *(int32_t*)((s3) + 0x34);                              // 0x00174620: lw $a2, 0x34($s3)
    if (a2 <= 0) goto label_0x174674;                           // 0x00174624: blezl $a2, 0x174674
    func_0015b740();  // 15b740                                // 0x0017462c: jal 0x15b740
    a1 = 0x3e8;                                                 // 0x00174630: addiu $a1, $zero, 0x3e8
label_0x174634:
    goto label_0x174674;                                        // 0x00174634: b 0x174674
    /* nop */                                                   // 0x0017463c: nop 
label_0x174640:
    func_00169640();  // 169640                                // 0x00174640: jal 0x169640
    v0 = (v0 < 0x6c) ? 1 : 0;                                   // 0x00174648: slti $v0, $v0, 0x6c
    /* beqzl $v0, 0x174674 */                                   // 0x0017464c: beqzl $v0, 0x174674
    a1 = *(int32_t*)((s4) + 4);                                 // 0x00174650: lw $a1, 4($s4)
    v0 = *(int32_t*)((s4) + 4);                                 // 0x00174654: lw $v0, 4($s4)
    v1 = 0x7e2;                                                 // 0x00174658: addiu $v1, $zero, 0x7e2
    /* beqzl $v1, 0x174664 */                                   // 0x0017465c: beqzl $v1, 0x174664
    /* break (trap) */                                          // 0x00174660: break 0, 7
    v0 = v0 << 0xb;                                             // 0x00174664: sll $v0, $v0, 0xb
    /* divide: v0 / v1 -> hi:lo */                              // 0x00174668: div $zero, $v0, $v1
    /* mflo $v0 */                                              // 0x0017466c
label_0x174674:
    goto label_0x1746a8;                                        // 0x00174674: b 0x1746a8
    v1 = *(int32_t*)((s4) + 8);                                 // 0x00174678: lw $v1, 8($s4)
    /* nop */                                                   // 0x0017467c: nop 
label_0x174680:
    v0 = local_4;                                               // 0x00174680: lw $v0, 4($sp)
    if (v0 == 0) goto label_0x174698;                           // 0x00174684: beqz $v0, 0x174698
    v0 = local_0;                                               // 0x00174688: lw $v0, 0($sp)
    v1 = *(int32_t*)((s1) + 8);                                 // 0x0017468c: lw $v1, 8($s1)
    goto label_0x1746a8;                                        // 0x00174690: b 0x1746a8
    a1 = *(int32_t*)((s1) + 4);                                 // 0x00174694: lw $a1, 4($s1)
label_0x174698:
    /* beqzl $v0, 0x1746c4 */                                   // 0x00174698: beqzl $v0, 0x1746c4
    v1 = *(int32_t*)((s2) + 8);                                 // 0x001746a0: lw $v1, 8($s2)
    a1 = *(int32_t*)((s2) + 4);                                 // 0x001746a4: lw $a1, 4($s2)
label_0x1746a8:
    v0 = 1;                                                     // 0x001746a8: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 4) = a1;                                // 0x001746ac: sw $a1, 4($s0)
    *(uint32_t*)(s0) = v0;                                      // 0x001746b0: sw $v0, 0($s0)
    func_00174f18();  // 174f18                                // 0x001746b8: jal 0x174f18
    *(uint32_t*)((s0) + 8) = v1;                                // 0x001746bc: sw $v1, 8($s0)
label_0x1746c0:
    return;                                                     // 0x001746dc: jr $ra
    sp = sp + 0x50;                                             // 0x001746e0: addiu $sp, $sp, 0x50
}