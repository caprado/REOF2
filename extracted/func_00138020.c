void func_00138020() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00138020: addiu $sp, $sp, -0x20
    v0 = 0x20 << 16;                                            // 0x00138024: lui $v0, 0x20
    s2 = v0 + 0x21c4;                                           // 0x0013802c: addiu $s2, $v0, 0x21c4
    func_00141ee0();  // 0x141e50                                // 0x00138040: jal 0x141e50
    if (v0 == 0) goto label_0x13808c;                           // 0x0013804c: beqz $v0, 0x13808c
    a0 = 0 | 0x9600;                                            // 0x00138050: ori $a0, $zero, 0x9600
    func_00137fb0();  // 0x137ec8                                // 0x00138054: jal 0x137ec8
    /* nop */                                                   // 0x00138058: nop 
    func_00101a58();  // 0x101988                                // 0x0013805c: jal 0x101988
    a0 = 0 | 0x9601;                                            // 0x00138064: ori $a0, $zero, 0x9601
    func_00137fb0();  // 0x137ec8                                // 0x00138068: jal 0x137ec8
    /* bnezl $s0, 0x138088 */                                   // 0x00138070: bnezl $s0, 0x138088
    g_002021c4 = 0;  // Global at 0x002021c4                    // 0x00138074: sw $zero, 0($s2)
    func_00101ba0();  // 0x101b08                                // 0x00138078: jal 0x101b08
    /* nop */                                                   // 0x0013807c: nop 
    g_002021c4 = 0;  // Global at 0x002021c4                    // 0x00138084: sw $zero, 0($s2)
label_0x13808c:
    return;                                                     // 0x0013809c: jr $ra
    sp = sp + 0x20;                                             // 0x001380a0: addiu $sp, $sp, 0x20
}