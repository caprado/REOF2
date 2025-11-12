void func_001db050() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xb0;                                            // 0x001db050: addiu $sp, $sp, -0xb0
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001db058: addu.qb $zero, $sp, $s1
    s1 = 0x31 << 16;                                            // 0x001db05c: lui $s1, 0x31
    func_001afb40();  // 0x1afb10                                // 0x001db064: jal 0x1afb10
    s1 = s1 + 0x37a0;                                           // 0x001db068: addiu $s1, $s1, 0x37a0
    if (v0 == 0) goto label_0x1db0fc;                           // 0x001db06c: beqz $v0, 0x1db0fc
    at = 0x31 << 16;                                            // 0x001db070: lui $at, 0x31
    s0 = 0x81 << 16;                                            // 0x001db074: lui $s0, 0x81
    v0 = g_003137b7;  // Global at 0x003137b7                   // 0x001db078: lb $v0, 0x37b7($at)
    if (v0 != 0) goto label_0x1db0bc;                           // 0x001db07c: bnez $v0, 0x1db0bc
    s0 = s0 + -0x5580;                                          // 0x001db080: addiu $s0, $s0, -0x5580
    a3 = g_003137ba;  // Global at 0x003137ba                   // 0x001db084: lhu $a3, 0x1a($s1)
    a1 = 0x24 << 16;                                            // 0x001db088: lui $a1, 0x24
    a2 = 0x24 << 16;                                            // 0x001db08c: lui $a2, 0x24
    a0 = sp + 0x30;                                             // 0x001db090: addiu $a0, $sp, 0x30
    a1 = &str_00247a38;  // "data/rom/scene/single"             // 0x001db094: addiu $a1, $a1, 0x7a38
    func_0010a570();  // 0x10a4d8                                // 0x001db098: jal 0x10a4d8
    a2 = &str_00247a50;  // "r%03d.sgl"                         // 0x001db09c: addiu $a2, $a2, 0x7a50
    a0 = sp + 0x30;                                             // 0x001db0a0: addiu $a0, $sp, 0x30
    a2 = 1;                                                     // 0x001db0a8: addiu $a2, $zero, 1
    func_001d33e0();  // 0x1d3390                                // 0x001db0ac: jal 0x1d3390
    goto label_0x1db0dc;                                        // 0x001db0b4: b 0x1db0dc
    /* nop */                                                   // 0x001db0b8: nop 
label_0x1db0bc:
    a2 = g_003137ba;  // Global at 0x003137ba                   // 0x001db0bc: lhu $a2, 0x1a($s1)
    a1 = 0x24 << 16;                                            // 0x001db0c0: lui $a1, 0x24
    a0 = sp + 0x30;                                             // 0x001db0c4: addiu $a0, $sp, 0x30
    func_0010a570();  // 0x10a4d8                                // 0x001db0c8: jal 0x10a4d8
    a1 = &str_00247a68;  // "%s/r%03d.bin"                      // 0x001db0cc: addiu $a1, $a1, 0x7a68
    a0 = sp + 0x30;                                             // 0x001db0d0: addiu $a0, $sp, 0x30
    func_001a9b80();  // 0x1a9b30                                // 0x001db0d4: jal 0x1a9b30
label_0x1db0dc:
    if (v0 > 0) goto label_0x1db0ec;                            // 0x001db0dc: bgtz $v0, 0x1db0ec
    /* nop */                                                   // 0x001db0e0: nop 
    goto label_0x1db0fc;                                        // 0x001db0e4: b 0x1db0fc
    g_0080aa80 = 0;  // Global at 0x0080aa80                    // 0x001db0e8: sw $zero, 0($s0)
label_0x1db0ec:
    func_007d62d0();  // 0x7d62d0                               // 0x001db0ec: jal 0x7d62d0
    /* nop */                                                   // 0x001db0f0: nop 
    func_007d5d30();  // 0x7d5d30                               // 0x001db0f4: jal 0x7d5d30
    a0 = 2;                                                     // 0x001db0f8: addiu $a0, $zero, 2
label_0x1db0fc:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001db100: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001db104: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001db108: jr $ra
    sp = sp + 0xb0;                                             // 0x001db10c: addiu $sp, $sp, 0xb0
}