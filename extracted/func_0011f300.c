void func_0011f300() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x0011f300: addiu $sp, $sp, -0x50
    func_0011d378();  // 0x11d320                                // 0x0011f31c: jal 0x11d320
    v1 = 0x1f << 16;                                            // 0x0011f324: lui $v1, 0x1f
    a1 = 0x1f << 16;                                            // 0x0011f328: lui $a1, 0x1f
    s3 = g_001f1a08;  // Global at 0x001f1a08                   // 0x0011f32c: lw $s3, 0x1a08($v1)
    g_001f1a0c = s1;  // Global at 0x001f1a0c                   // 0x0011f334: sw $s1, 0x1a0c($a1)
    g_001f1a08 = s0;  // Global at 0x001f1a08                   // 0x0011f33c: sw $s0, 0x1a08($v1)
    a2 = s1 << 4;                                               // 0x0011f340: sll $a2, $s1, 4
    func_00107d30();  // 0x107c70                                // 0x0011f344: jal 0x107c70
    if (s2 == 0) goto label_0x11f360;                           // 0x0011f34c: beqz $s2, 0x11f360
    func_0011d390();  // 0x11d378                                // 0x0011f354: jal 0x11d378
    /* nop */                                                   // 0x0011f358: nop 
label_0x11f360:
    return;                                                     // 0x0011f374: jr $ra
    sp = sp + 0x50;                                             // 0x0011f378: addiu $sp, $sp, 0x50
}