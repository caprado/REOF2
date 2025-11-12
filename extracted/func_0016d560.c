void func_0016d560() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x50;                                            // 0x0016d560: addiu $sp, $sp, -0x50
    v0 = -1;                                                    // 0x0016d564: addiu $v0, $zero, -1
    a3 = s1 + 0x1b28;                                           // 0x0016d58c: addiu $a3, $s1, 0x1b28
    a2 = 4;                                                     // 0x0016d59c: addiu $a2, $zero, 4
    s5 = *(int32_t*)((a3) + 8);                                 // 0x0016d5a0: lw $s5, 8($a3)
    *(uint32_t*)(s4) = v0;                                      // 0x0016d5a4: sw $v0, 0($s4)
    a0 = *(int32_t*)(v1);                                       // 0x0016d5a8: lw $a0, 0($v1)
    a1 = *(int32_t*)((v1) + 4);                                 // 0x0016d5ac: lw $a1, 4($v1)
    func_00158518();  // 0x158410                                // 0x0016d5b0: jal 0x158410
    s0 = *(int32_t*)((a3) + 0x10);                              // 0x0016d5b4: lw $s0, 0x10($a3)
    if (v0 == 0) goto label_0x16d5fc;                           // 0x0016d5c4: beqz $v0, 0x16d5fc
    func_00174060();  // 0x173fe8                                // 0x0016d5cc: jal 0x173fe8
    /* nop */                                                   // 0x0016d5d0: nop 
    a0 = s1 + 0xcc0;                                            // 0x0016d5d4: addiu $a0, $s1, 0xcc0
    v0 = local_0;                                               // 0x0016d5d8: lw $v0, 0($sp)
    a1 = s5 + 0xec;                                             // 0x0016d5e0: addiu $a1, $s5, 0xec
    if (v0 < 0) goto label_0x16d5fc;                            // 0x0016d5e8: bltz $v0, 0x16d5fc
    func_0016d7c0();  // 0x16d648                                // 0x0016d5f0: jal 0x16d648
    /* nop */                                                   // 0x0016d5f4: nop 
    *(uint32_t*)(s4) = v0;                                      // 0x0016d5f8: sw $v0, 0($s4)
label_0x16d5fc:
    return;                                                     // 0x0016d618: jr $ra
    sp = sp + 0x50;                                             // 0x0016d61c: addiu $sp, $sp, 0x50
}