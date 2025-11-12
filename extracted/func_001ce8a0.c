void func_001ce8a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001ce8a0: addiu $sp, $sp, -0x10
    v1 = *(int32_t*)((a0) + 4);                                 // 0x001ce8a8: lw $v1, 4($a0)
    a2 = *(int32_t*)((a0) + 0xc);                               // 0x001ce8ac: lw $a2, 0xc($a0)
    v1 = v1 + a1;                                               // 0x001ce8b0: addu $v1, $v1, $a1
    at = (a2 < v1) ? 1 : 0;                                     // 0x001ce8b4: slt $at, $a2, $v1
    if (at == 0) goto label_0x1ce8d0;                           // 0x001ce8b8: beqz $at, 0x1ce8d0
    /* nop */                                                   // 0x001ce8bc: nop 
    func_001ce640();  // 0x1ce600                                // 0x001ce8c0: jal 0x1ce600
    a0 = 1;                                                     // 0x001ce8c4: addiu $a0, $zero, 1
    goto label_0x1ce8d8;                                        // 0x001ce8c8: b 0x1ce8d8
label_0x1ce8d0:
    *(uint32_t*)((a0) + 4) = v1;                                // 0x001ce8d0: sw $v1, 4($a0)
label_0x1ce8d8:
    return;                                                     // 0x001ce8d8: jr $ra
    sp = sp + 0x10;                                             // 0x001ce8dc: addiu $sp, $sp, 0x10
}