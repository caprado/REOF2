void func_001697f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001697f8: addiu $sp, $sp, -0x20
    v0 = 0x21 << 16;                                            // 0x001697fc: lui $v0, 0x21
    s0 = 7;                                                     // 0x00169808: addiu $s0, $zero, 7
    s1 = v0 + 0x578c;                                           // 0x00169810: addiu $s1, $v0, 0x578c
    v0 = g_0021578c;  // Global at 0x0021578c                   // 0x0016981c: lw $v0, 0($s1)
label_0x169820:
    s1 = s1 + 4;                                                // 0x00169820: addiu $s1, $s1, 4
    if (v0 == 0) goto label_0x169838;                           // 0x00169824: beqz $v0, 0x169838
    func_00173668();  // 173668                                // 0x0016982c: jal 0x173668
    /* nop */                                                   // 0x00169830: nop 
label_0x169838:
    s0 = s0 + -1;                                               // 0x00169838: addiu $s0, $s0, -1
    if (s0 >= 0) goto label_0x169820;                           // 0x0016983c: bgezl $s0, 0x169820
    v0 = g_00215790;  // Global at 0x00215790                   // 0x00169840: lw $v0, 0($s1)
    s0 = 0x21 << 16;                                            // 0x00169844: lui $s0, 0x21
    s0 = s0 + 0x5738;                                           // 0x00169848: addiu $s0, $s0, 0x5738
    func_00175708();  // 175708                                // 0x0016984c: jal 0x175708
    func_001663d8();  // 1663d8                                // 0x00169854: jal 0x1663d8
    a0 = s0 + 0xc;                                              // 0x00169858: addiu $a0, $s0, 0xc
    func_00177208();  // 177208                                // 0x0016985c: jal 0x177208
    a0 = s0 + 0x10;                                             // 0x00169860: addiu $a0, $s0, 0x10
    func_00169b80();  // 169b80                                // 0x00169864: jal 0x169b80
    func_00169b60();  // 169b60                                // 0x0016986c: jal 0x169b60
    /* nop */                                                   // 0x00169870: nop 
    func_00169b28();  // 169b28                                // 0x00169874: jal 0x169b28
    /* nop */                                                   // 0x00169878: nop 
    if (s0 == 0) v0 = s2;                                       // 0x00169884: movz $v0, $s2, $s0
    return;                                                     // 0x00169894: jr $ra
    sp = sp + 0x20;                                             // 0x00169898: addiu $sp, $sp, 0x20
}