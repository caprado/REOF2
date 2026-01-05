void func_00139fe8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00139fe8: addiu $sp, $sp, -0x20
    a0 = a0 << 0x18;                                            // 0x00139fec: sll $a0, $a0, 0x18
    s1 = a1 << 0x18;                                            // 0x00139ff4: sll $s1, $a1, 0x18
    s1 = s1 >> 0x18;                                            // 0x00139ff8: sra $s1, $s1, 0x18
    func_00139fb0();  // 139fb0                                // 0x0013a004: jal 0x139fb0
    a0 = a0 >> 0x18;                                            // 0x0013a008: sra $a0, $a0, 0x18
    func_00139fb0();  // 139fb0                                // 0x0013a010: jal 0x139fb0
    v1 = -1;                                                    // 0x0013a018: addiu $v1, $zero, -1
    s0 = s0 ^ v0;                                               // 0x0013a01c: xor $s0, $s0, $v0
    if (s0 != 0) v0 = v1;                                       // 0x0013a024: movn $v0, $v1, $s0
    return;                                                     // 0x0013a034: jr $ra
    sp = sp + 0x20;                                             // 0x0013a038: addiu $sp, $sp, 0x20
}