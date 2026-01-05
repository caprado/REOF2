void func_00124c30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_2, local_4;
    
    sp = sp + -0x10;                                            // 0x00124c30: addiu $sp, $sp, -0x10
    a1 = s0 + 0xa8;                                             // 0x00124c40: addiu $a1, $s0, 0xa8
    a2 = s0 + 0xac;                                             // 0x00124c44: addiu $a2, $s0, 0xac
    func_00134bc0();  // 134bc0                                // 0x00124c48: jal 0x134bc0
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00124c4c: lw $a0, 8($s0)
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00124c50: lw $a0, 8($s0)
    a3 = s0 + 0xa6;                                             // 0x00124c54: addiu $a3, $s0, 0xa6
    a1 = s0 + 0xa2;                                             // 0x00124c58: addiu $a1, $s0, 0xa2
    a2 = s0 + 0xa4;                                             // 0x00124c5c: addiu $a2, $s0, 0xa4
    return func_00134bf8();  // Tail call                       // 0x00124c68: j 0x134bf8
    sp = sp + 0x10;                                             // 0x00124c6c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00124c70: addiu $sp, $sp, -0x10
    a1 = s0 + 0xa8;                                             // 0x00124c80: addiu $a1, $s0, 0xa8
    a2 = s0 + 0xac;                                             // 0x00124c84: addiu $a2, $s0, 0xac
    func_00134b98();  // 134b98                                // 0x00124c88: jal 0x134b98
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00124c8c: lw $a0, 8($s0)
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00124c90: lw $a0, 8($s0)
    a3 = *(int16_t*)((s0) + 0xa6);                              // 0x00124c94: lh $a3, 0xa6($s0)
    a1 = *(int16_t*)((s0) + 0xa2);                              // 0x00124c98: lh $a1, 0xa2($s0)
    a2 = *(int16_t*)((s0) + 0xa4);                              // 0x00124c9c: lh $a2, 0xa4($s0)
    return func_00134c18();  // Tail call                        // 0x00124ca8: j 0x134be8
    sp = sp + 0x10;                                             // 0x00124cac: addiu $sp, $sp, 0x10
    sp = sp + -0x30;                                            // 0x00124cb0: addiu $sp, $sp, -0x30
    func_0010ae00();  // 10ae00                                // 0x00124cc8: jal 0x10ae00
    a3 = sp + 2;                                                // 0x00124cdc: addiu $a3, $sp, 2
    func_00124218();  // 124218                                // 0x00124ce0: jal 0x124218
    t0 = sp + 4;                                                // 0x00124ce4: addiu $t0, $sp, 4
    v1 = local_0;                                               // 0x00124ce8: lhu $v1, 0($sp)
    a0 = local_2;                                               // 0x00124cec: lhu $a0, 2($sp)
    v0 = local_4;                                               // 0x00124cf0: lhu $v0, 4($sp)
    *(uint16_t*)((s1) + 0x9c) = v1;                             // 0x00124cf8: sh $v1, 0x9c($s1)
    *(uint16_t*)((s1) + 0xa0) = v0;                             // 0x00124cfc: sh $v0, 0xa0($s1)
    *(uint16_t*)((s1) + 0x9e) = a0;                             // 0x00124d00: sh $a0, 0x9e($s1)
    return;                                                     // 0x00124d0c: jr $ra
    sp = sp + 0x30;                                             // 0x00124d10: addiu $sp, $sp, 0x30
}