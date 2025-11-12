void func_0017c1f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0017c1f0: addiu $sp, $sp, -0x10
    v0 = 0x10;                                                  // 0x0017c1f4: addiu $v0, $zero, 0x10
    a1 = ((unsigned)a0 < (unsigned)0x11) ? 1 : 0;               // 0x0017c1fc: sltiu $a1, $a0, 0x11
    if (a0 == v0) goto label_0x17c240;                          // 0x0017c200: beq $a0, $v0, 0x17c240
    v1 = 1;                                                     // 0x0017c204: addiu $v1, $zero, 1
    if (a1 != 0) goto label_0x17c22c;                           // 0x0017c208: bnez $a1, 0x17c22c
    a2 = 0x23 << 16;                                            // 0x0017c20c: lui $a2, 0x23
    v0 = 0x18;                                                  // 0x0017c210: addiu $v0, $zero, 0x18
    if (a0 == v0) goto label_0x17c240;                          // 0x0017c214: beq $a0, $v0, 0x17c240
    v1 = 2;                                                     // 0x0017c218: addiu $v1, $zero, 2
    v0 = 0x20;                                                  // 0x0017c21c: addiu $v0, $zero, 0x20
    if (a0 == v0) goto label_0x17c240;                          // 0x0017c220: beq $a0, $v0, 0x17c240
    v1 = 3;                                                     // 0x0017c224: addiu $v1, $zero, 3
    a2 = 0x23 << 16;                                            // 0x0017c228: lui $a2, 0x23
label_0x17c22c:
    a2 = &str_00229940;  // "E201311: sfxcnv_MakeTable : compo is not support." // 0x0017c230: addiu $a2, $a2, -0x66c0
    func_0017cec8();  // 0x17ce88                                // 0x0017c234: jal 0x17ce88
label_0x17c240:
    return;                                                     // 0x0017c248: jr $ra
    sp = sp + 0x10;                                             // 0x0017c24c: addiu $sp, $sp, 0x10
}