void func_0014fc10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a0) + 4);                                 // 0x0014fc10: lw $v1, 4($a0)
    a1 = *(int32_t*)((a0) + 8);                                 // 0x0014fc14: lw $a1, 8($a0)
    v0 = (v1 < 0) ? 1 : 0;                                      // 0x0014fc18: slti $v0, $v1, 0
    a2 = v1 + 0xf;                                              // 0x0014fc1c: addiu $a2, $v1, 0xf
    if (v0 != 0) v1 = a2;                                       // 0x0014fc20: movn $v1, $a2, $v0
    v0 = (a1 < 0) ? 1 : 0;                                      // 0x0014fc24: slti $v0, $a1, 0
    a3 = a1 + 0x1f;                                             // 0x0014fc28: addiu $a3, $a1, 0x1f
    v1 = v1 >> 4;                                               // 0x0014fc2c: sra $v1, $v1, 4
    if (v0 != 0) a1 = a3;                                       // 0x0014fc30: movn $a1, $a3, $v0
    a0 = *(int32_t*)(a0);                                       // 0x0014fc34: lw $a0, 0($a0)
    if (v1 <= 0) goto label_0x14fcb4;                           // 0x0014fc38: blez $v1, 0x14fcb4
    a1 = a1 >> 5;                                               // 0x0014fc3c: sra $a1, $a1, 5
    t4 = a1 << 0xa;                                             // 0x0014fc40: sll $t4, $a1, 0xa
    t3 = a1 << 0xb;                                             // 0x0014fc44: sll $t3, $a1, 0xb
label_0x14fc48:
    t0 = a0 + 3;                                                // 0x0014fc48: addiu $t0, $a0, 3
    v0 = t0 + t4;                                               // 0x0014fc50: addu $v0, $t0, $t4
    if (a1 <= 0) goto label_0x14fca8;                           // 0x0014fc54: blez $a1, 0x14fca8
    a3 = v0 + -1;                                               // 0x0014fc58: addiu $a3, $v0, -1
    a2 = 0xf;                                                   // 0x0014fc60: addiu $a2, $zero, 0xf
    /* nop */                                                   // 0x0014fc64: nop 
label_0x14fc68:
    v0 = *(uint8_t*)(a3);                                       // 0x0014fc68: lbu $v0, 0($a3)
    a3 = a3 + 4;                                                // 0x0014fc6c: addiu $a3, $a3, 4
    a2 = a2 + -1;                                               // 0x0014fc70: addiu $a2, $a2, -1
    v0 = (unsigned)v0 >> 1;                                     // 0x0014fc74: srl $v0, $v0, 1
    v0 = v0 + 1;                                                // 0x0014fc78: addiu $v0, $v0, 1
    *(uint8_t*)(t0) = v0;                                       // 0x0014fc7c: sb $v0, 0($t0)
    if (a2 >= 0) goto label_0x14fc68;                           // 0x0014fc80: bgez $a2, 0x14fc68
    t0 = t0 + 4;                                                // 0x0014fc84: addiu $t0, $t0, 4
    t1 = t1 + 1;                                                // 0x0014fc88: addiu $t1, $t1, 1
    v0 = (t1 < 0x10) ? 1 : 0;                                   // 0x0014fc8c: slti $v0, $t1, 0x10
    /* bnezl $v0, 0x14fc68 */                                   // 0x0014fc90: bnezl $v0, 0x14fc68
    a2 = 0xf;                                                   // 0x0014fc94: addiu $a2, $zero, 0xf
    t2 = t2 + 1;                                                // 0x0014fc98: addiu $t2, $t2, 1
    v0 = (t2 < a1) ? 1 : 0;                                     // 0x0014fc9c: slt $v0, $t2, $a1
    /* bnezl $v0, 0x14fc60 */                                   // 0x0014fca0: bnezl $v0, 0x14fc60
label_0x14fca8:
    v1 = v1 + -1;                                               // 0x0014fca8: addiu $v1, $v1, -1
    if (v1 != 0) goto label_0x14fc48;                           // 0x0014fcac: bnez $v1, 0x14fc48
    a0 = a0 + t3;                                               // 0x0014fcb0: addu $a0, $a0, $t3
label_0x14fcb4:
    return;                                                     // 0x0014fcb4: jr $ra
    /* nop */                                                   // 0x0014fcb8: nop 
}