void func_00119ff8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_14, local_18, local_24, local_30;
    
    sp = sp + -0xa0;                                            // 0x00119ff8: addiu $sp, $sp, -0xa0
    s4 = 0x25 << 16;                                            // 0x0011a004: lui $s4, 0x25
    s2 = s4 + -0x1e40;                                          // 0x0011a00c: addiu $s2, $s4, -0x1e40
    func_00117eb8();  // 117eb8                                // 0x0011a018: jal 0x117eb8
    func_00118330();  // 118330                                // 0x0011a024: jal 0x118330
    a0 = 0xa;                                                   // 0x0011a028: addiu $a0, $zero, 0xa
    v1 = 0x1f << 16;                                            // 0x0011a02c: lui $v1, 0x1f
    v0 = g_001f03dc;  // Global at 0x001f03dc                   // 0x0011a030: lw $v0, 0x3dc($v1)
    if (v0 != 0) goto label_0x11a04c;                           // 0x0011a034: bnez $v0, 0x11a04c
    /* nop */                                                   // 0x0011a038: nop 
    func_00118360();  // 118360                                // 0x0011a03c: jal 0x118360
    /* nop */                                                   // 0x0011a040: nop 
    goto label_0x11a140;                                        // 0x0011a044: b 0x11a140
    v0 = -1;                                                    // 0x0011a048: addiu $v0, $zero, -1
label_0x11a04c:
    if (s0 == 0) goto label_0x11a060;                           // 0x0011a04c: beqz $s0, 0x11a060
    /* nop */                                                   // 0x0011a050: nop 
    v0 = *(int32_t*)((s0) + 4);                                 // 0x0011a054: lw $v0, 4($s0)
    /* bnezl $v0, 0x11a070 */                                   // 0x0011a058: bnezl $v0, 0x11a070
    v1 = *(int32_t*)(s0);                                       // 0x0011a05c: lw $v1, 0($s0)
label_0x11a060:
    func_00118360();  // 118360                                // 0x0011a060: jal 0x118360
    /* nop */                                                   // 0x0011a064: nop 
    goto label_0x11a140;                                        // 0x0011a068: b 0x11a140
    v0 = -9;                                                    // 0x0011a06c: addiu $v0, $zero, -9
    v0 = 1;                                                     // 0x0011a070: addiu $v0, $zero, 1
    local_14 = v0;                                              // 0x0011a074: sw $v0, 0x14($sp)
    a0 = sp + 0x10;                                             // 0x0011a078: addiu $a0, $sp, 0x10
    g_0024e1cc = v1;  // Global at 0x0024e1cc                   // 0x0011a07c: sw $v1, 0xc($s2)
    local_18 = 0;                                               // 0x0011a080: sw $zero, 0x18($sp)
    DeleteSema();  // 0x1142e0                                  // 0x0011a084: jal 0x1142e0
    local_24 = 0;                                               // 0x0011a088: sw $zero, 0x24($sp)
    v1 = sp + 0x30;                                             // 0x0011a090: addiu $v1, $sp, 0x30
    v0 = 0x25 << 16;                                            // 0x0011a094: lui $v0, 0x25
    g_0024e1c0 = s1;  // Global at 0x0024e1c0                   // 0x0011a098: sw $s1, -0x1e40($s4)
    s3 = v0 + -0x1200;                                          // 0x0011a09c: addiu $s3, $v0, -0x1200
    a0 = 0x25 << 16;                                            // 0x0011a0a0: lui $a0, 0x25
    v0 = 4;                                                     // 0x0011a0a4: addiu $v0, $zero, 4
    g_0024e1c4 = v1;  // Global at 0x0024e1c4                   // 0x0011a0a8: sw $v1, 4($s2)
    g_0024e1c8 = v0;  // Global at 0x0024e1c8                   // 0x0011a0ac: sw $v0, 8($s2)
    a0 = a0 + -0x740;                                           // 0x0011a0b0: addiu $a0, $a0, -0x740
    a1 = 0xa;                                                   // 0x0011a0b8: addiu $a1, $zero, 0xa
    local_0 = 0;                                                // 0x0011a0bc: sw $zero, 0($sp)
    t0 = 0x14;                                                  // 0x0011a0c4: addiu $t0, $zero, 0x14
    t2 = 4;                                                     // 0x0011a0cc: addiu $t2, $zero, 4
    func_001176a8();  // 1176a8                                // 0x0011a0d0: jal 0x1176a8
    if (v0 >= 0) goto label_0x11a0f8;                           // 0x0011a0d8: bgezl $v0, 0x11a0f8
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x0011a0dc: sw $zero, 4($s0)
    SignalSema();  // 0x1142f0                                  // 0x0011a0e0: jal 0x1142f0
    func_00118360();  // 118360                                // 0x0011a0e8: jal 0x118360
    /* nop */                                                   // 0x0011a0ec: nop 
    goto label_0x11a140;                                        // 0x0011a0f0: b 0x11a140
    v0 = -0xb;                                                  // 0x0011a0f4: addiu $v0, $zero, -0xb
label_0x11a0f8:
    v0 = 0x2000 << 16;                                          // 0x0011a0f8: lui $v0, 0x2000
    v0 = s3 | v0;                                               // 0x0011a0fc: or $v0, $s3, $v0
    func_00118360();  // 118360                                // 0x0011a100: jal 0x118360
    s0 = g_20000000;  // Global at 0x20000000                   // 0x0011a104: lw $s0, 0($v0)
    if (s0 != 0) goto label_0x11a120;                           // 0x0011a108: bnez $s0, 0x11a120
    /* nop */                                                   // 0x0011a10c: nop 
    SignalSema();  // 0x1142f0                                  // 0x0011a110: jal 0x1142f0
    goto label_0x11a140;                                        // 0x0011a118: b 0x11a140
    v0 = -0xb;                                                  // 0x0011a11c: addiu $v0, $zero, -0xb
label_0x11a120:
    PollSema();  // 0x114320                                    // 0x0011a120: jal 0x114320
    SignalSema();  // 0x1142f0                                  // 0x0011a128: jal 0x1142f0
    v0 = local_30;                                              // 0x0011a130: lw $v0, 0x30($sp)
    v1 = -1;                                                    // 0x0011a134: addiu $v1, $zero, -1
    v1 = (v1 < v0) ? 1 : 0;                                     // 0x0011a138: slt $v1, $v1, $v0
    if (v1 != 0) v0 = 0;                                        // 0x0011a13c: movn $v0, $zero, $v1
label_0x11a140:
    return;                                                     // 0x0011a158: jr $ra
    sp = sp + 0xa0;                                             // 0x0011a15c: addiu $sp, $sp, 0xa0
}