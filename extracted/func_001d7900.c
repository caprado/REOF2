void func_001d7900() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x130;                                           // 0x001d7900: addiu $sp, $sp, -0x130
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d7908: addu.qb $zero, $sp, $s1
    func_001d3c30();  // 0x1d3c20                                // 0x001d7914: jal 0x1d3c20
    a0 = 0x2a00;                                                // 0x001d7918: addiu $a0, $zero, 0x2a00
    a0 = 0x15;                                                  // 0x001d791c: addiu $a0, $zero, 0x15
    func_001aefe0();  // 0x1aefd0                                // 0x001d7920: jal 0x1aefd0
    a1 = 2;                                                     // 0x001d7924: addiu $a1, $zero, 2
    a0 = 1;                                                     // 0x001d7928: addiu $a0, $zero, 1
    func_001aefe0();  // 0x1aefd0                                // 0x001d792c: jal 0x1aefd0
    a1 = 0x800;                                                 // 0x001d7930: addiu $a1, $zero, 0x800
    a0 = 0x12;                                                  // 0x001d7934: addiu $a0, $zero, 0x12
    func_001aefe0();  // 0x1aefd0                                // 0x001d7938: jal 0x1aefd0
    a1 = 0 | 0x8000;                                            // 0x001d793c: ori $a1, $zero, 0x8000
    a0 = 0xc;                                                   // 0x001d7940: addiu $a0, $zero, 0xc
    func_001aefe0();  // 0x1aefd0                                // 0x001d7944: jal 0x1aefd0
    a0 = 0x66;                                                  // 0x001d794c: addiu $a0, $zero, 0x66
    func_001aefe0();  // 0x1aefd0                                // 0x001d7950: jal 0x1aefd0
    a1 = 1;                                                     // 0x001d7954: addiu $a1, $zero, 1
    a0 = 0x62;                                                  // 0x001d7958: addiu $a0, $zero, 0x62
    func_001aefe0();  // 0x1aefd0                                // 0x001d795c: jal 0x1aefd0
    a1 = 1;                                                     // 0x001d7960: addiu $a1, $zero, 1
    func_001aefe0();  // 0x1aefd0                                // 0x001d7968: jal 0x1aefd0
    a1 = 0x20;                                                  // 0x001d796c: addiu $a1, $zero, 0x20
    a0 = 2;                                                     // 0x001d7970: addiu $a0, $zero, 2
    func_001aefe0();  // 0x1aefd0                                // 0x001d7974: jal 0x1aefd0
    s1 = 0x3a << 16;                                            // 0x001d797c: lui $s1, 0x3a
    a0 = 0x240;                                                 // 0x001d7980: addiu $a0, $zero, 0x240
    a1 = 8;                                                     // 0x001d7984: addiu $a1, $zero, 8
    func_001b28a0();  // 0x1b2780                                // 0x001d7988: jal 0x1b2780
    s1 = s1 + -0x48c0;                                          // 0x001d798c: addiu $s1, $s1, -0x48c0
    at = 0x3a << 16;                                            // 0x001d7990: lui $at, 0x3a
    g_0039bf48 = v0;  // Global at 0x0039bf48                   // 0x001d7994: sw $v0, -0x40b8($at)
    at = 0x3a << 16;                                            // 0x001d7998: lui $at, 0x3a
    g_0039bf58 = 0;  // Global at 0x0039bf58                    // 0x001d799c: sw $zero, -0x40a8($at)
    at = 0x31 << 16;                                            // 0x001d79a0: lui $at, 0x31
    v0 = g_003137b7;  // Global at 0x003137b7                   // 0x001d79a4: lb $v0, 0x37b7($at)
    if (v0 != 0) goto label_0x1d79d0;                           // 0x001d79a8: bnez $v0, 0x1d79d0
    /* nop */                                                   // 0x001d79ac: nop 
    s0 = s0 & 0xff;                                             // 0x001d79b0: andi $s0, $s0, 0xff
    a0 = s0 << 0x10;                                            // 0x001d79b8: sll $a0, $s0, 0x10
    a1 = -1;                                                    // 0x001d79bc: addiu $a1, $zero, -1
    func_001d4f30();  // 0x1d4db0                                // 0x001d79c0: jal 0x1d4db0
    a3 = 2;                                                     // 0x001d79c4: addiu $a3, $zero, 2
    goto label_0x1d7a04;                                        // 0x001d79c8: b 0x1d7a04
label_0x1d79d0:
    s0 = s0 & 0xff;                                             // 0x001d79d0: andi $s0, $s0, 0xff
    a1 = 0x24 << 16;                                            // 0x001d79d4: lui $a1, 0x24
    a0 = sp + 0x30;                                             // 0x001d79d8: addiu $a0, $sp, 0x30
    a1 = &str_00247528;  // "%s\\objs%02d.mat"                  // 0x001d79dc: addiu $a1, $a1, 0x7528
    func_0010a570();  // 0x10a4d8                                // 0x001d79e0: jal 0x10a4d8
    v0 = 1 << 16;                                               // 0x001d79e8: lui $v0, 1
    a0 = sp + 0x30;                                             // 0x001d79f0: addiu $a0, $sp, 0x30
    a2 = 0x2a00;                                                // 0x001d79f4: addiu $a2, $zero, 0x2a00
    func_001aa6d0();  // 0x1aa480                                // 0x001d79f8: jal 0x1aa480
    a3 = v0 | 2;                                                // 0x001d79fc: ori $a3, $v0, 2
label_0x1d7a04:
    at = 0x31 << 16;                                            // 0x001d7a04: lui $at, 0x31
    s0 = g_003137fc;  // Global at 0x003137fc                   // 0x001d7a08: lw $s0, 0x37fc($at)
    a1 = 0x24 << 16;                                            // 0x001d7a0c: lui $a1, 0x24
    a2 = 0x24 << 16;                                            // 0x001d7a10: lui $a2, 0x24
    a0 = sp + 0x30;                                             // 0x001d7a14: addiu $a0, $sp, 0x30
    a1 = &str_00247540;  // "data\\rom\\tex\\it"                // 0x001d7a18: addiu $a1, $a1, 0x7540
    func_0010a570();  // 0x10a4d8                                // 0x001d7a1c: jal 0x10a4d8
    a2 = &str_00247550;  // "%sr%03d\\e%03d%02d%02d.bin"        // 0x001d7a20: addiu $a2, $a2, 0x7550
    a0 = sp + 0x30;                                             // 0x001d7a24: addiu $a0, $sp, 0x30
    a2 = 1;                                                     // 0x001d7a2c: addiu $a2, $zero, 1
    func_001d33e0();  // 0x1d3390                                // 0x001d7a30: jal 0x1d3390
    if (v0 <= 0) goto label_0x1d7a48;                           // 0x001d7a38: blez $v0, 0x1d7a48
    func_001da410();  // 0x1da1f0                                // 0x001d7a40: jal 0x1da1f0
    /* nop */                                                   // 0x001d7a44: nop 
label_0x1d7a48:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d7a4c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d7a50: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d7a54: jr $ra
    sp = sp + 0x130;                                            // 0x001d7a58: addiu $sp, $sp, 0x130
}