void func_0015b020() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0015b020: addiu $sp, $sp, -0x30
    v0 = -0x40;                                                 // 0x0015b024: addiu $v0, $zero, -0x40
    s1 = s3 << 5;                                               // 0x0015b034: sll $s1, $s3, 5
    s2 = a1 + 0x3f;                                             // 0x0015b03c: addiu $s2, $a1, 0x3f
    s1 = s1 - s3;                                               // 0x0015b040: subu $s1, $s1, $s3
    s2 = s2 & v0;                                               // 0x0015b044: and $s2, $s2, $v0
    s1 = s1 << 5;                                               // 0x0015b048: sll $s1, $s1, 5
    a2 = s3 << 8;                                               // 0x0015b04c: sll $a2, $s3, 8
    s1 = s2 + s1;                                               // 0x0015b050: addu $s1, $s2, $s1
    a2 = a2 + 0x800;                                            // 0x0015b058: addiu $a2, $a2, 0x800
    s4 = s1 + 0x1520;                                           // 0x0015b060: addiu $s4, $s1, 0x1520
    func_00156058();  // 0x155f90                                // 0x0015b070: jal 0x155f90
    s0 = 0x25 << 16;                                            // 0x0015b074: lui $s0, 0x25
    func_0015b358();  // 0x15b350                                // 0x0015b07c: jal 0x15b350
    a1 = 0xae0;                                                 // 0x0015b080: addiu $a1, $zero, 0xae0
    a1 = 0x22 << 16;                                            // 0x0015b084: lui $a1, 0x22
    s0 = s0 + 0x63f0;                                           // 0x0015b088: addiu $s0, $s0, 0x63f0
    a1 = a1 + 0x6e90;                                           // 0x0015b08c: addiu $a1, $a1, 0x6e90
    func_00155f90();  // 0x155db0                                // 0x0015b094: jal 0x155db0
    a2 = 0x10;                                                  // 0x0015b098: addiu $a2, $zero, 0x10
    g_0025643c = s1;  // Global at 0x0025643c                   // 0x0015b09c: sw $s1, 0x4c($s0)
    g_00256448 = s2;  // Global at 0x00256448                   // 0x0015b0a0: sw $s2, 0x58($s0)
    g_00256440 = s4;  // Global at 0x00256440                   // 0x0015b0a4: sw $s4, 0x50($s0)
    g_00256444 = s3;  // Global at 0x00256444                   // 0x0015b0a8: sw $s3, 0x54($s0)
    return;                                                     // 0x0015b0c4: jr $ra
    sp = sp + 0x30;                                             // 0x0015b0c8: addiu $sp, $sp, 0x30
}