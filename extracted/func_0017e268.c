void func_0017e268() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0017e268: addiu $sp, $sp, -0x10
    if (a0 == 0) goto label_0x17e27c;                           // 0x0017e26c: beqz $a0, 0x17e27c
    if (a1 >= 0) goto label_0x17e288;                           // 0x0017e274: bgez $a1, 0x17e288
    a1 = 0x23 << 16;                                            // 0x0017e278: lui $a1, 0x23
label_0x17e27c:
    goto label_0x17e29c;                                        // 0x0017e27c: b 0x17e29c
    /* nop */                                                   // 0x0017e284: nop 
label_0x17e288:
    a0 = a0 + 0x12;                                             // 0x0017e288: addiu $a0, $a0, 0x12
    a1 = a1 + -0x6250;                                          // 0x0017e28c: addiu $a1, $a1, -0x6250
    func_0010b2a0();  // 0x10b0e8                                // 0x0017e290: jal 0x10b0e8
    a2 = 1;                                                     // 0x0017e294: addiu $a2, $zero, 1
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x0017e298: sltiu $v0, $v0, 1
label_0x17e29c:
    return;                                                     // 0x0017e2a0: jr $ra
    sp = sp + 0x10;                                             // 0x0017e2a4: addiu $sp, $sp, 0x10
}