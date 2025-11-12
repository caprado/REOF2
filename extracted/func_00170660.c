void func_00170660() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0xfff << 16;                                           // 0x00170664: lui $v1, 0xfff
    a0 = *(int32_t*)((a3) + 8);                                 // 0x00170668: lw $a0, 8($a3)
    v1 = v1 | 0xffff;                                           // 0x0017066c: ori $v1, $v1, 0xffff
    a2 = *(int32_t*)((a3) + 4);                                 // 0x00170670: lw $a2, 4($a3)
    a0 = a0 << 4;                                               // 0x00170674: sll $a0, $a0, 4
    a0 = a0 + a2;                                               // 0x00170678: addu $a0, $a0, $a2
    a0 = a0 + 0x10;                                             // 0x0017067c: addiu $a0, $a0, 0x10
    a0 = a0 & v1;                                               // 0x00170680: and $a0, $a0, $v1
    if (a1 == a0) goto label_0x1706a4;                          // 0x00170684: beq $a1, $a0, 0x1706a4
    v0 = *(int32_t*)(a3);                                       // 0x0017068c: lw $v0, 0($a3)
    v0 = a1 - v0;                                               // 0x00170690: subu $v0, $a1, $v0
    a0 = v0 + 0x7ff;                                            // 0x00170694: addiu $a0, $v0, 0x7ff
    v1 = (v0 < 0) ? 1 : 0;                                      // 0x00170698: slti $v1, $v0, 0
    if (v1 != 0) v0 = a0;                                       // 0x0017069c: movn $v0, $a0, $v1
    v0 = v0 >> 0xb;                                             // 0x001706a0: sra $v0, $v0, 0xb
label_0x1706a4:
    return;                                                     // 0x001706a4: jr $ra
    /* nop */                                                   // 0x001706a8: nop 
}