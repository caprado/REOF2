void func_0011dd78() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0011dd78: addiu $sp, $sp, -0x40
    s2 = 0x1f << 16;                                            // 0x0011dd84: lui $s2, 0x1f
    s0 = s2 + 0x19e8;                                           // 0x0011dd8c: addiu $s0, $s2, 0x19e8
    v0 = g_001f19f0;  // Global at 0x001f19f0                   // 0x0011dd94: lw $v0, 8($s0)
    if (v0 >= 0) goto label_0x11ddac;                           // 0x0011dd98: bgez $v0, 0x11ddac
    /* nop */                                                   // 0x0011dd9c: nop 
    v0 = 0x8000 << 16;                                          // 0x0011dda0: lui $v0, 0x8000
    goto label_0x11de18;                                        // 0x0011dda4: b 0x11de18
    v0 = v0 | 0x8001;                                           // 0x0011dda8: ori $v0, $v0, 0x8001
label_0x11ddac:
    v0 = g_001f19f8;  // Global at 0x001f19f8                   // 0x0011ddac: lw $v0, 0x10($s0)
    if (v0 == 0) goto label_0x11ddc4;                           // 0x0011ddb0: beqz $v0, 0x11ddc4
    /* nop */                                                   // 0x0011ddb4: nop 
    v0 = 0x8000 << 16;                                          // 0x0011ddb8: lui $v0, 0x8000
    goto label_0x11de18;                                        // 0x0011ddbc: b 0x11de18
    v0 = v0 | 0x10;                                             // 0x0011ddc0: ori $v0, $v0, 0x10
label_0x11ddc4:
    func_0011d320();  // 11d320                                // 0x0011ddc4: jal 0x11d320
    /* nop */                                                   // 0x0011ddc8: nop 
    a1 = g_001f19f0;  // Global at 0x001f19f0                   // 0x0011ddcc: lw $a1, 8($s0)
    AddDmacHandler();  // 0x113fe0                              // 0x0011ddd4: jal 0x113fe0
    a0 = 0xb;                                                   // 0x0011ddd8: addiu $a0, $zero, 0xb
    if (v0 != 0) goto label_0x11de00;                           // 0x0011dddc: bnez $v0, 0x11de00
    v0 = -1;                                                    // 0x0011dde0: addiu $v0, $zero, -1
    func_00114dc0();  // 114dc0                                // 0x0011dde4: jal 0x114dc0
    a0 = 0xb;                                                   // 0x0011dde8: addiu $a0, $zero, 0xb
    func_0011dc00();  // 11dc00                                // 0x0011ddec: jal 0x11dc00
    a0 = 0xc00;                                                 // 0x0011ddf0: addiu $a0, $zero, 0xc00
    func_0011dbf0();  // 11dbf0                                // 0x0011ddf4: jal 0x11dbf0
    v0 = -1;                                                    // 0x0011ddfc: addiu $v0, $zero, -1
label_0x11de00:
    if (s1 == 0) goto label_0x11de14;                           // 0x0011de04: beqz $s1, 0x11de14
    g_001f19f0 = v0;  // Global at 0x001f19f0                   // 0x0011de08: sw $v0, 8($s0)
    func_0011d378();  // 11d378                                // 0x0011de0c: jal 0x11d378
    /* nop */                                                   // 0x0011de10: nop 
label_0x11de14:
label_0x11de18:
    return;                                                     // 0x0011de28: jr $ra
    sp = sp + 0x40;                                             // 0x0011de2c: addiu $sp, $sp, 0x40
}