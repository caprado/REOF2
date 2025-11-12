void func_00114fe0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_10, local_14, local_34, local_38, local_4, local_8, local_c;
    
    sp = sp + -0x80;                                            // 0x00114fe0: addiu $sp, $sp, -0x80
    s6 = 0x25 << 16;                                            // 0x00114ff4: lui $s6, 0x25
    s5 = 0x22 << 16;                                            // 0x00114ffc: lui $s5, 0x22
    s4 = 1;                                                     // 0x00115004: addiu $s4, $zero, 1
    s3 = 2;                                                     // 0x0011500c: addiu $s3, $zero, 2
    s2 = s1 + 8;                                                // 0x00115014: addiu $s2, $s1, 8
    s0 = s1 + 9;                                                // 0x0011501c: addiu $s0, $s1, 9
label_0x115020:
    PollSema();  // 0x114320                                    // 0x00115020: jal 0x114320
    a0 = g_0024bdb0;  // Global at 0x0024bdb0                   // 0x00115024: lw $a0, -0x4250($s6)
    v1 = g_00250000;  // Global at 0x00250000                   // 0x00115028: lw $v1, 0($s1)
    v1 = v1 & 0x1ff;                                            // 0x0011502c: andi $v1, $v1, 0x1ff
    a0 = v1 + 1;                                                // 0x00115030: addiu $a0, $v1, 1
    v1 = v1 << 1;                                               // 0x00115034: sll $v1, $v1, 1
    g_00250000 = a0;  // Global at 0x00250000                   // 0x00115038: sw $a0, 0($s1)
    v0 = s2 + v1;                                               // 0x0011503c: addu $v0, $s2, $v1
    a2 = s0 + v1;                                               // 0x00115040: addu $a2, $s0, $v1
    v0 = g_00250000;  // Global at 0x00250000                   // 0x00115044: lbu $v0, 0($v0)
    if (v0 == s4) goto label_0x115088;                          // 0x00115048: beq $v0, $s4, 0x115088
    a1 = (v0 < 2) ? 1 : 0;                                      // 0x0011504c: slti $a1, $v0, 2
    if (a1 == 0) goto label_0x115068;                           // 0x00115050: beqz $a1, 0x115068
    a0 = &str_00221198;  // "DelayThread"                       // 0x00115054: addiu $a0, $s5, 0x1198
    if (v0 == 0) goto label_0x115078;                           // 0x00115058: beqz $v0, 0x115078
    goto label_0x1150a8;                                        // 0x00115060: b 0x1150a8
    /* nop */                                                   // 0x00115064: nop 
label_0x115068:
    if (v0 == s3) goto label_0x115098;                          // 0x00115068: beq $v0, $s3, 0x115098
    v1 = s0 + v1;                                               // 0x0011506c: addu $v1, $s0, $v1
    goto label_0x1150a8;                                        // 0x00115070: b 0x1150a8
    /* nop */                                                   // 0x00115074: nop 
label_0x115078:
    _iWakeupThread();  // 0x114210                              // 0x00115078: jal 0x114210
    a0 = g_0024bdb8;  // Global at 0x0024bdb8                   // 0x0011507c: lbu $a0, 0($v1)
    goto label_0x115020;                                        // 0x00115080: b 0x115020
    /* nop */                                                   // 0x00115084: nop 
label_0x115088:
    GetThreadId();  // 0x114190                                 // 0x00115088: jal 0x114190
    a0 = *(uint8_t*)(a2);                                       // 0x0011508c: lbu $a0, 0($a2)
    goto label_0x115020;                                        // 0x00115090: b 0x115020
    /* nop */                                                   // 0x00115094: nop 
label_0x115098:
    _iSuspendThread();  // 0x114250                             // 0x00115098: jal 0x114250
    a0 = g_0024bdb8;  // Global at 0x0024bdb8                   // 0x0011509c: lbu $a0, 0($v1)
    goto label_0x115020;                                        // 0x001150a0: b 0x115020
    /* nop */                                                   // 0x001150a4: nop 
label_0x1150a8:
    func_00116508();  // 0x1164d0                                // 0x001150a8: jal 0x1164d0
    /* nop */                                                   // 0x001150ac: nop 
    goto label_0x115020;                                        // 0x001150b0: b 0x115020
    /* nop */                                                   // 0x001150b4: nop 
    sp = sp + -0x80;                                            // 0x001150b8: addiu $sp, $sp, -0x80
    s0 = 0x1f << 16;                                            // 0x001150c0: lui $s0, 0x1f
    v0 = g_001f0338;  // Global at 0x001f0338                   // 0x001150c8: lw $v0, 0x338($s0)
    if (v0 > 0) goto label_0x115140;                            // 0x001150cc: bgtz $v0, 0x115140
    v0 = 0xff;                                                  // 0x001150d4: addiu $v0, $zero, 0xff
    local_38 = 0;                                               // 0x001150d8: sw $zero, 0x38($sp)
    local_34 = v0;                                              // 0x001150dc: sw $v0, 0x34($sp)
    DeleteSema();  // 0x1142e0                                  // 0x001150e0: jal 0x1142e0
    a0 = sp + 0x30;                                             // 0x001150e4: addiu $a0, $sp, 0x30
    s1 = 0x25 << 16;                                            // 0x001150e8: lui $s1, 0x25
    if (v0 < 0) goto label_0x115140;                            // 0x001150ec: bltz $v0, 0x115140
    g_0024bdb0 = v0;  // Global at 0x0024bdb0                   // 0x001150f0: sw $v0, -0x4250($s1)
    v0 = 0x11 << 16;                                            // 0x001150f4: lui $v0, 0x11
    v1 = 0x25 << 16;                                            // 0x001150f8: lui $v1, 0x25
    a1 = 0x25 << 16;                                            // 0x001150fc: lui $a1, 0x25
    v0 = v0 + 0x4fe0;                                           // 0x00115100: addiu $v0, $v0, 0x4fe0
    v1 = v1 + -0x4650;                                          // 0x00115104: addiu $v1, $v1, -0x4650
    a1 = a1 + 0x10f0;                                           // 0x00115108: addiu $a1, $a1, 0x10f0
    a2 = 0x400;                                                 // 0x0011510c: addiu $a2, $zero, 0x400
    local_4 = v0;                                               // 0x00115110: sw $v0, 4($sp)
    local_8 = v1;                                               // 0x00115114: sw $v1, 8($sp)
    local_c = a2;                                               // 0x0011511c: sw $a2, 0xc($sp)
    local_10 = a1;                                              // 0x00115120: sw $a1, 0x10($sp)
    DeleteThread();  // 0x1140e0                                // 0x00115124: jal 0x1140e0
    local_14 = 0;                                               // 0x00115128: sw $zero, 0x14($sp)
    if (a0 >= 0) goto label_0x115148;                           // 0x00115130: bgez $a0, 0x115148
    g_001f0338 = a0;  // Global at 0x001f0338                   // 0x00115134: sw $a0, 0x338($s0)
    SignalSema();  // 0x1142f0                                  // 0x00115138: jal 0x1142f0
    a0 = g_0024bdb0;  // Global at 0x0024bdb0                   // 0x0011513c: lw $a0, -0x4250($s1)
label_0x115140:
    goto label_0x115178;                                        // 0x00115140: b 0x115178
    v0 = -1;                                                    // 0x00115144: addiu $v0, $zero, -1
label_0x115148:
    v0 = 0x25 << 16;                                            // 0x00115148: lui $v0, 0x25
    v1 = v0 + -0x4248;                                          // 0x0011514c: addiu $v1, $v0, -0x4248
    g_0024bdb8 = 0;  // Global at 0x0024bdb8                    // 0x00115150: sw $zero, -0x4248($v0)
    ExitDeleteThread();  // 0x114100                            // 0x00115158: jal 0x114100
    g_0024bdbc = 0;  // Global at 0x0024bdbc                    // 0x0011515c: sw $zero, 4($v1)
    ReferThreadStatus();  // 0x1141d0                           // 0x00115160: jal 0x1141d0
    /* nop */                                                   // 0x00115164: nop 
    iChangeThreadPriority();  // 0x114170                       // 0x0011516c: jal 0x114170
    a1 = 1;                                                     // 0x00115170: addiu $a1, $zero, 1
    v0 = g_001f0338;  // Global at 0x001f0338                   // 0x00115174: lw $v0, 0x338($s0)
label_0x115178:
    return;                                                     // 0x00115184: jr $ra
    sp = sp + 0x80;                                             // 0x00115188: addiu $sp, $sp, 0x80
}