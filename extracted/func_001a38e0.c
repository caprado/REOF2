void func_001a38e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a38e0: addiu $sp, $sp, -0x10
    a1 = 0xc << 16;                                             // 0x001a38ec: lui $a1, 0xc
    func_001a32e0();  // 0x1a3230                                // 0x001a38f0: jal 0x1a3230
    if (v0 != 0) goto label_0x1a3908;                           // 0x001a38f8: bnez $v0, 0x1a3908
    a0 = v0 + 0xc;                                              // 0x001a38fc: addiu $a0, $v0, 0xc
    goto label_0x1a3934;                                        // 0x001a3900: b 0x1a3934
    v0 = -1;                                                    // 0x001a3904: addiu $v0, $zero, -1
label_0x1a3908:
    goto label_0x1a3924;                                        // 0x001a3908: b 0x1a3924
label_0x1a3910:
    v0 = *(int32_t*)(a0);                                       // 0x001a3910: lw $v0, 0($a0)
    v1 = v1 + 1;                                                // 0x001a3914: addiu $v1, $v1, 1
    v0 = v0 << 3;                                               // 0x001a3918: sll $v0, $v0, 3
    a0 = a0 + 4;                                                // 0x001a391c: addiu $a0, $a0, 4
    a0 = a0 + v0;                                               // 0x001a3920: addu $a0, $a0, $v0
label_0x1a3924:
    v0 = (v1 < t0) ? 1 : 0;                                     // 0x001a3924: slt $v0, $v1, $t0
    if (v0 != 0) goto label_0x1a3910;                           // 0x001a3928: bnez $v0, 0x1a3910
    /* nop */                                                   // 0x001a392c: nop 
    v0 = *(int32_t*)(a0);                                       // 0x001a3930: lw $v0, 0($a0)
label_0x1a3934:
    return;                                                     // 0x001a3938: jr $ra
    sp = sp + 0x10;                                             // 0x001a393c: addiu $sp, $sp, 0x10
}