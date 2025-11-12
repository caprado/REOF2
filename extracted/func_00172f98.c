void func_00172f98() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00172f98: addiu $sp, $sp, -0x10
    v1 = 4;                                                     // 0x00172fa4: addiu $v1, $zero, 4
    v0 = *(int32_t*)((a1) + 0x48);                              // 0x00172fa8: lw $v0, 0x48($a1)
    if (v0 != v1) goto label_0x172fd0;                          // 0x00172fac: bne $v0, $v1, 0x172fd0
    a2 = a1 + 0x94c;                                            // 0x00172fb0: addiu $a2, $a1, 0x94c
    v0 = *(int32_t*)((a1) + 0x50);                              // 0x00172fb4: lw $v0, 0x50($a1)
    v1 = 1;                                                     // 0x00172fb8: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x172fe4;                          // 0x00172fbc: beq $v0, $v1, 0x172fe4
    v0 = *(int32_t*)((a2) + 0x18);                              // 0x00172fc4: lw $v0, 0x18($a2)
    if (v0 != v1) goto label_0x172fd8;                          // 0x00172fc8: bne $v0, $v1, 0x172fd8
    /* nop */                                                   // 0x00172fcc: nop 
label_0x172fd0:
    goto label_0x172fe4;                                        // 0x00172fd0: b 0x172fe4
label_0x172fd8:
    func_00175d00();  // 0x175cc0                                // 0x00172fd8: jal 0x175cc0
    /* nop */                                                   // 0x00172fdc: nop 
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x00172fe0: sltu $v0, $zero, $v0
label_0x172fe4:
    return;                                                     // 0x00172fe8: jr $ra
    sp = sp + 0x10;                                             // 0x00172fec: addiu $sp, $sp, 0x10
}