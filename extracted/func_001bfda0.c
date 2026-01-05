void func_001bfda0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001bfda0: addiu $sp, $sp, -0x20
    t0 = 0x22 << 16;                                            // 0x001bfda4: lui $t0, 0x22
    a2 = 0x31 << 16;                                            // 0x001bfdac: lui $a2, 0x31
    at = 0x31 << 16;                                            // 0x001bfdb4: lui $at, 0x31
    t1 = g_00316094;  // Global at 0x00316094                   // 0x001bfdb8: lw $t1, 0x6094($at)
    a2 = a2 + 0x6010;                                           // 0x001bfdbc: addiu $a2, $a2, 0x6010
    t0 = t0 + -0x30e8;                                          // 0x001bfdc0: addiu $t0, $t0, -0x30e8
    v1 = 2;                                                     // 0x001bfdc4: addiu $v1, $zero, 2
    v0 = -1;                                                    // 0x001bfdc8: addiu $v0, $zero, -1
    t1 = t1 << 2;                                               // 0x001bfdd0: sll $t1, $t1, 2
    at = 0x31 << 16;                                            // 0x001bfdd4: lui $at, 0x31
    t0 = t0 + t1;                                               // 0x001bfdd8: addu $t0, $t0, $t1
    s0 = g_0021cf18;  // Global at 0x0021cf18                   // 0x001bfddc: lw $s0, 0($t0)
    g_0031608c = v1;  // Global at 0x0031608c                   // 0x001bfde0: sw $v1, 0x608c($at)
    at = 0x31 << 16;                                            // 0x001bfde4: lui $at, 0x31
    g_00315fe4 = v0;  // Global at 0x00315fe4                   // 0x001bfde8: sw $v0, 0x5fe4($at)
    at = 0x31 << 16;                                            // 0x001bfdec: lui $at, 0x31
    g_00315fc0 = 0;  // Global at 0x00315fc0                    // 0x001bfdf0: sw $zero, 0x5fc0($at)
    at = 0x31 << 16;                                            // 0x001bfdf4: lui $at, 0x31
    g_00315fc4 = 0;  // Global at 0x00315fc4                    // 0x001bfdf8: sw $zero, 0x5fc4($at)
    at = 0x31 << 16;                                            // 0x001bfdfc: lui $at, 0x31
    g_00315fd4 = a0;  // Global at 0x00315fd4                   // 0x001bfe00: sw $a0, 0x5fd4($at)
    at = 0x31 << 16;                                            // 0x001bfe04: lui $at, 0x31
    a0 = 0x31 << 16;                                            // 0x001bfe08: lui $a0, 0x31
    g_00316090 = a1;  // Global at 0x00316090                   // 0x001bfe0c: sw $a1, 0x6090($at)
    a0 = a0 + 0x6032;                                           // 0x001bfe10: addiu $a0, $a0, 0x6032
    a1 = 0x24 << 16;                                            // 0x001bfe14: lui $a1, 0x24
    func_0010a4d8();  // 10a4d8                                // 0x001bfe18: jal 0x10a4d8
    a1 = &str_0023e180;  // "rom0:ROMVER"                       // 0x001bfe1c: addiu $a1, $a1, -0x1e80
    v1 = *(int32_t*)((s0) + 0x54);                              // 0x001bfe20: lw $v1, 0x54($s0)
    at = 0x31 << 16;                                            // 0x001bfe24: lui $at, 0x31
    g_0031607c = v1;  // Global at 0x0031607c                   // 0x001bfe28: sw $v1, 0x607c($at)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bfe30: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bfe34: jr $ra
    sp = sp + 0x20;                                             // 0x001bfe38: addiu $sp, $sp, 0x20
}