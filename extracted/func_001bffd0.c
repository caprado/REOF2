void func_001bffd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001bffd0: addiu $sp, $sp, -0x20
    a3 = 0x22 << 16;                                            // 0x001bffd4: lui $a3, 0x22
    at = 0x31 << 16;                                            // 0x001bffdc: lui $at, 0x31
    a3 = a3 + -0x30e8;                                          // 0x001bffe4: addiu $a3, $a3, -0x30e8
    t0 = g_00316094;  // Global at 0x00316094                   // 0x001bffe8: lw $t0, 0x6094($at)
    v1 = 3;                                                     // 0x001bffec: addiu $v1, $zero, 3
    v0 = -1;                                                    // 0x001bfff0: addiu $v0, $zero, -1
    t0 = t0 << 2;                                               // 0x001bfff4: sll $t0, $t0, 2
    at = 0x31 << 16;                                            // 0x001bfff8: lui $at, 0x31
    a3 = a3 + t0;                                               // 0x001bfffc: addu $a3, $a3, $t0
    s0 = g_0021cf18;  // Global at 0x0021cf18                   // 0x001c0000: lw $s0, 0($a3)
    g_0031608c = v1;  // Global at 0x0031608c                   // 0x001c0004: sw $v1, 0x608c($at)
    at = 0x31 << 16;                                            // 0x001c0008: lui $at, 0x31
    g_00315fe4 = v0;  // Global at 0x00315fe4                   // 0x001c000c: sw $v0, 0x5fe4($at)
    at = 0x31 << 16;                                            // 0x001c0010: lui $at, 0x31
    g_00315fc0 = 0;  // Global at 0x00315fc0                    // 0x001c0014: sw $zero, 0x5fc0($at)
    at = 0x31 << 16;                                            // 0x001c0018: lui $at, 0x31
    g_00315fc4 = 0;  // Global at 0x00315fc4                    // 0x001c001c: sw $zero, 0x5fc4($at)
    at = 0x31 << 16;                                            // 0x001c0020: lui $at, 0x31
    g_00315fd4 = a0;  // Global at 0x00315fd4                   // 0x001c0024: sw $a0, 0x5fd4($at)
    at = 0x31 << 16;                                            // 0x001c0028: lui $at, 0x31
    a0 = 0x31 << 16;                                            // 0x001c002c: lui $a0, 0x31
    g_00316090 = a1;  // Global at 0x00316090                   // 0x001c0030: sw $a1, 0x6090($at)
    a0 = a0 + 0x6032;                                           // 0x001c0034: addiu $a0, $a0, 0x6032
    at = 0x31 << 16;                                            // 0x001c0038: lui $at, 0x31
    a1 = 0x24 << 16;                                            // 0x001c003c: lui $a1, 0x24
    g_00316084 = a2;  // Global at 0x00316084                   // 0x001c0040: sw $a2, 0x6084($at)
    a1 = &str_0023e180;  // "rom0:ROMVER"                       // 0x001c0044: addiu $a1, $a1, -0x1e80
    a2 = 0x31 << 16;                                            // 0x001c0048: lui $a2, 0x31
    a2 = a2 + 0x6010;                                           // 0x001c004c: addiu $a2, $a2, 0x6010
    func_0010a570();  // 0x10a4d8                                // 0x001c0050: jal 0x10a4d8
    at = 0x31 << 16;                                            // 0x001c0058: lui $at, 0x31
    v0 = *(int32_t*)((s0) + 0x54);                              // 0x001c005c: lw $v0, 0x54($s0)
    a0 = g_00316090;  // Global at 0x00316090                   // 0x001c0060: lw $a0, 0x6090($at)
    at = 0x31 << 16;                                            // 0x001c0064: lui $at, 0x31
    g_0031607c = v0;  // Global at 0x0031607c                   // 0x001c0068: sw $v0, 0x607c($at)
    at = 0x31 << 16;                                            // 0x001c006c: lui $at, 0x31
    a2 = g_0031607c;  // Global at 0x0031607c                   // 0x001c0070: lw $a2, 0x607c($at)
    func_00107d30();  // 0x107c70                                // 0x001c0074: jal 0x107c70
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c0080: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c0084: jr $ra
    sp = sp + 0x20;                                             // 0x001c0088: addiu $sp, $sp, 0x20
}