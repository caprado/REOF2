void func_00112840() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00112840: addiu $sp, $sp, -0x20
    func_001123a0();  // 1123a0                                // 0x0011284c: jal 0x1123a0
    v1 = g_12000006;  // Global at 0x12000006                   // 0x00112854: lh $v1, 6($v0)
    v0 = 1;                                                     // 0x00112858: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1128a4;                          // 0x0011285c: bne $v1, $v0, 0x1128a4
    v0 = 0x1200 << 16;                                          // 0x00112864: lui $v0, 0x1200
    v1 = 0x1200 << 16;                                          // 0x00112868: lui $v1, 0x1200
    a2 = 0x1200 << 16;                                          // 0x0011286c: lui $a2, 0x1200
    v1 = v1 | 0x70;                                             // 0x00112874: ori $v1, $v1, 0x70
    a2 = a2 | 0x80;                                             // 0x00112878: ori $a2, $a2, 0x80
    a0 = 0x1200 << 16;                                          // 0x0011287c: lui $a0, 0x1200
    a0 = a0 | 0xc0;                                             // 0x00112884: ori $a0, $a0, 0xc0
    goto label_0x1128f0;                                        // 0x0011289c: b 0x1128f0
label_0x1128a4:
    v1 = 0x1200 << 16;                                          // 0x001128a4: lui $v1, 0x1200
    v0 = 0x1200 << 16;                                          // 0x001128a8: lui $v0, 0x1200
    a2 = 0x1200 << 16;                                          // 0x001128ac: lui $a2, 0x1200
    v0 = v0 | 0x20;                                             // 0x001128b4: ori $v0, $v0, 0x20
    a2 = a2 | 0x90;                                             // 0x001128b8: ori $a2, $a2, 0x90
    a1 = 0x1200 << 16;                                          // 0x001128bc: lui $a1, 0x1200
    a1 = a1 | 0xa0;                                             // 0x001128c4: ori $a1, $a1, 0xa0
    a0 = 0x1200 << 16;                                          // 0x001128c8: lui $a0, 0x1200
    a0 = a0 | 0xe0;                                             // 0x001128d0: ori $a0, $a0, 0xe0
label_0x1128f0:
    return;                                                     // 0x001128f4: jr $ra
    sp = sp + 0x20;                                             // 0x001128f8: addiu $sp, $sp, 0x20
}