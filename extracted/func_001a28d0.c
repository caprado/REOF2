void func_001a28d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a28d0: addiu $sp, $sp, -0x10
    func_001a28c0();  // 1a28c0                                // 0x001a28d8: jal 0x1a28c0
    /* nop */                                                   // 0x001a28dc: nop 
    v1 = *(int32_t*)((v0) + 4);                                 // 0x001a28e0: lw $v1, 4($v0)
    a0 = a0 + 0xc;                                              // 0x001a28e4: addiu $a0, $a0, 0xc
    goto label_0x1a2910;                                        // 0x001a28e8: b 0x1a2910
label_0x1a28f0:
    v0 = *(uint8_t*)(a0);                                       // 0x001a28f0: lbu $v0, 0($a0)
    if (v0 != a1) goto label_0x1a2904;                          // 0x001a28f4: bne $v0, $a1, 0x1a2904
    goto label_0x1a2920;                                        // 0x001a28fc: b 0x1a2920
label_0x1a2904:
    v0 = *(int32_t*)((a0) + 8);                                 // 0x001a2904: lw $v0, 8($a0)
    a2 = a2 + 1;                                                // 0x001a2908: addiu $a2, $a2, 1
    a0 = a0 + v0;                                               // 0x001a290c: addu $a0, $a0, $v0
label_0x1a2910:
    v0 = ((unsigned)a2 < (unsigned)v1) ? 1 : 0;                 // 0x001a2910: sltu $v0, $a2, $v1
    if (v0 != 0) goto label_0x1a28f0;                           // 0x001a2914: bnez $v0, 0x1a28f0
label_0x1a2920:
    return;                                                     // 0x001a2920: jr $ra
    sp = sp + 0x10;                                             // 0x001a2924: addiu $sp, $sp, 0x10
}