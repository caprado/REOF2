void func_0011cadc() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0011cadc: addiu $sp, $sp, -0x20
    a0 = a2 + -1;                                               // 0x0011cae0: addiu $a0, $a2, -1
    v0 = ((unsigned)a0 < (unsigned)0xd) ? 1 : 0;                // 0x0011cae8: sltiu $v0, $a0, 0xd
    if (v0 != 0) goto label_0x11cb00;                           // 0x0011caec: bnez $v0, 0x11cb00
    v0 = 0xffff << 16;                                          // 0x0011caf4: lui $v0, 0xffff
    goto label_0x11cb4c;                                        // 0x0011caf8: b 0x11cb4c
    v0 = v0 | 0xffff;                                           // 0x0011cafc: ori $v0, $v0, 0xffff
label_0x11cb00:
    v0 = 0x1f << 16;                                            // 0x0011cb00: lui $v0, 0x1f
    v1 = a2 << 2;                                               // 0x0011cb04: sll $v1, $a2, 2
    v0 = v0 + 0x740;                                            // 0x0011cb08: addiu $v0, $v0, 0x740
    a0 = ((unsigned)a0 < (unsigned)3) ? 1 : 0;                  // 0x0011cb0c: sltiu $a0, $a0, 3
    v1 = v1 + v0;                                               // 0x0011cb10: addu $v1, $v1, $v0
    s0 = *(int32_t*)(v1);                                       // 0x0011cb14: lw $s0, 0($v1)
    if (a0 == 0) goto label_0x11cb38;                           // 0x0011cb18: beqz $a0, 0x11cb38
    *(uint32_t*)(v1) = a1;                                      // 0x0011cb1c: sw $a1, 0($v1)
    a1 = 0x12 << 16;                                            // 0x0011cb20: lui $a1, 0x12
    AddIntcHandler2();  // 0x113f90                             // 0x0011cb28: jal 0x113f90
    a1 = a1 + -0x2e00;                                          // 0x0011cb2c: addiu $a1, $a1, -0x2e00
    goto label_0x11cb4c;                                        // 0x0011cb30: b 0x11cb4c
label_0x11cb38:
    a1 = 0x12 << 16;                                            // 0x0011cb38: lui $a1, 0x12
    func_00113fa0();  // 0x113fa0                               // 0x0011cb40: jal 0x113fa0
    a1 = a1 + -0x2e00;                                          // 0x0011cb44: addiu $a1, $a1, -0x2e00
label_0x11cb4c:
    return;                                                     // 0x0011cb54: jr $ra
    sp = sp + 0x20;                                             // 0x0011cb58: addiu $sp, $sp, 0x20
}