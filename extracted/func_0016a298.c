void func_0016a298() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0016a298: addiu $sp, $sp, -0x10
    func_0016a320();  // 0x16a2f8                                // 0x0016a2a4: jal 0x16a2f8
    v0 = *(int32_t*)(a0);                                       // 0x0016a2b0: lw $v0, 0($a0)
    /* bnezl $v0, 0x16a2d8 */                                   // 0x0016a2b4: bnezl $v0, 0x16a2d8
    v1 = *(int32_t*)((a0) + 0xc);                               // 0x0016a2b8: lw $v1, 0xc($a0)
    v0 = *(int32_t*)((a0) + 0x10);                              // 0x0016a2bc: lw $v0, 0x10($a0)
    if (v0 != 0) goto label_0x16a2e8;                           // 0x0016a2c0: bnez $v0, 0x16a2e8
    v0 = *(int32_t*)((a0) + 0x14);                              // 0x0016a2c8: lw $v0, 0x14($a0)
    if (v0 != 0) goto label_0x16a2e8;                           // 0x0016a2cc: bnez $v0, 0x16a2e8
    v1 = *(int32_t*)((a0) + 0xc);                               // 0x0016a2d4: lw $v1, 0xc($a0)
    v0 = *(int32_t*)((a0) + 8);                                 // 0x0016a2d8: lw $v0, 8($a0)
    v0 = v0 + v1;                                               // 0x0016a2dc: addu $v0, $v0, $v1
    v0 = s0 ^ v0;                                               // 0x0016a2e0: xor $v0, $s0, $v0
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x0016a2e4: sltiu $v0, $v0, 1
label_0x16a2e8:
    return;                                                     // 0x0016a2f0: jr $ra
    sp = sp + 0x10;                                             // 0x0016a2f4: addiu $sp, $sp, 0x10
}