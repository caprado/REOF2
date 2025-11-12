void func_00115690() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)((a1) + 4);                                 // 0x00115694: lw $v0, 4($a1)
    a0 = *(int32_t*)((a1) + 0xc);                               // 0x00115698: lw $a0, 0xc($a1)
    v1 = *(int32_t*)(a1);                                       // 0x0011569c: lw $v1, 0($a1)
    v0 = v0 + 1;                                                // 0x001156a0: addiu $v0, $v0, 1
    a0 = a0 + 1;                                                // 0x001156a4: addiu $a0, $a0, 1
    *(uint32_t*)((a1) + 4) = v0;                                // 0x001156a8: sw $v0, 4($a1)
    v1 = v1 + 0x10;                                             // 0x001156ac: addiu $v1, $v1, 0x10
    v1 = a1 + v1;                                               // 0x001156b0: addu $v1, $a1, $v1
    if (a0 != v1) goto label_0x1156c4;                          // 0x001156b4: bne $a0, $v1, 0x1156c4
    *(uint32_t*)((a1) + 0xc) = a0;                              // 0x001156b8: sw $a0, 0xc($a1)
    v0 = a1 + 0x10;                                             // 0x001156bc: addiu $v0, $a1, 0x10
    *(uint32_t*)((a1) + 0xc) = v0;                              // 0x001156c0: sw $v0, 0xc($a1)
label_0x1156c4:
    return;                                                     // 0x001156c4: jr $ra
    /* nop */                                                   // 0x001156c8: nop 
}