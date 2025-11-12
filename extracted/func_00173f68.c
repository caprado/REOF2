void func_00173f68() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = *(int32_t*)((a2) + 8);                                 // 0x00173f70: lw $a0, 8($a2)
    v1 = *(int32_t*)((a2) + 4);                                 // 0x00173f74: lw $v1, 4($a2)
    if (a0 == v1) goto label_0x173fe0;                          // 0x00173f78: beq $a0, $v1, 0x173fe0
    v0 = -1;                                                    // 0x00173f7c: addiu $v0, $zero, -1
    a1 = *(int32_t*)((a2) + 0xc);                               // 0x00173f80: lw $a1, 0xc($a2)
    v1 = *(int32_t*)(a2);                                       // 0x00173f84: lw $v1, 0($a2)
    v0 = a1 << 1;                                               // 0x00173f88: sll $v0, $a1, 1
    a0 = a1 + 1;                                                // 0x00173f8c: addiu $a0, $a1, 1
    v0 = v0 + a1;                                               // 0x00173f90: addu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x00173f98: sll $v0, $v0, 2
    v0 = v0 + v1;                                               // 0x00173f9c: addu $v0, $v0, $v1
    t1 = *(int32_t*)((t0) + 8);                                 // 0x00173fa8: lw $t1, 8($t0)
    *(uint32_t*)((v0) + 8) = t1;                                // 0x00173fb4: sw $t1, 8($v0)
    v1 = *(int32_t*)((a2) + 4);                                 // 0x00173fb8: lw $v1, 4($a2)
    a0 = (a0 < v1) ? 1 : 0;                                     // 0x00173fbc: slt $a0, $a0, $v1
    if (a0 != 0) goto label_0x173fcc;                           // 0x00173fc0: bnez $a0, 0x173fcc
    a1 = a1 - v1;                                               // 0x00173fc4: subu $a1, $a1, $v1
    a3 = a1 + 1;                                                // 0x00173fc8: addiu $a3, $a1, 1
label_0x173fcc:
    v1 = *(int32_t*)((a2) + 8);                                 // 0x00173fcc: lw $v1, 8($a2)
    *(uint32_t*)((a2) + 0xc) = a3;                              // 0x00173fd4: sw $a3, 0xc($a2)
    v1 = v1 + 1;                                                // 0x00173fd8: addiu $v1, $v1, 1
    *(uint32_t*)((a2) + 8) = v1;                                // 0x00173fdc: sw $v1, 8($a2)
label_0x173fe0:
    return;                                                     // 0x00173fe0: jr $ra
    /* nop */                                                   // 0x00173fe4: nop 
}