void func_00102838() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00102838: addiu $sp, $sp, -0x20
    func_00102910();  // 102910                                // 0x00102844: jal 0x102910
    if (v0 == 0) goto label_0x10285c;                           // 0x0010284c: beqz $v0, 0x10285c
    v1 = 1;                                                     // 0x00102850: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x102864;                          // 0x00102854: bne $v0, $v1, 0x102864
    /* nop */                                                   // 0x00102858: nop 
label_0x10285c:
    goto label_0x102890;                                        // 0x0010285c: b 0x102890
label_0x102864:
    if (s0 != 0) goto label_0x102874;                           // 0x00102864: bnez $s0, 0x102874
    v0 = 0x1000 << 16;                                          // 0x00102868: lui $v0, 0x1000
    goto label_0x102884;                                        // 0x0010286c: b 0x102884
    v1 = 2;                                                     // 0x00102870: addiu $v1, $zero, 2
label_0x102874:
    if (s0 != v1) goto label_0x102890;                          // 0x00102874: bne $s0, $v1, 0x102890
    v0 = 1;                                                     // 0x00102878: addiu $v0, $zero, 1
    v0 = 0x1000 << 16;                                          // 0x0010287c: lui $v0, 0x1000
    v1 = 4;                                                     // 0x00102880: addiu $v1, $zero, 4
label_0x102884:
    v0 = v0 | 0x3810;                                           // 0x00102884: ori $v0, $v0, 0x3810
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00102888: sw $v1, 0($v0)
    v0 = 1;                                                     // 0x0010288c: addiu $v0, $zero, 1
label_0x102890:
    return;                                                     // 0x00102898: jr $ra
    sp = sp + 0x20;                                             // 0x0010289c: addiu $sp, $sp, 0x20
}