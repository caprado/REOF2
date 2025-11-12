void func_0014fdd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((t3) + 4);                                 // 0x0014fdd8: lw $v1, 4($t3)
    v0 = *(int32_t*)((t3) + 8);                                 // 0x0014fde0: lw $v0, 8($t3)
    a3 = v1 + 0xf;                                              // 0x0014fde8: addiu $a3, $v1, 0xf
    a1 = (v1 < 0) ? 1 : 0;                                      // 0x0014fdec: slti $a1, $v1, 0
    a2 = v0 + 0x1f;                                             // 0x0014fdf0: addiu $a2, $v0, 0x1f
    a0 = (v0 < 0) ? 1 : 0;                                      // 0x0014fdf4: slti $a0, $v0, 0
    if (a1 != 0) v1 = a3;                                       // 0x0014fdf8: movn $v1, $a3, $a1
    if (a0 != 0) v0 = a2;                                       // 0x0014fdfc: movn $v0, $a2, $a0
    a3 = v0 >> 5;                                               // 0x0014fe00: sra $a3, $v0, 5
    t4 = v1 >> 4;                                               // 0x0014fe04: sra $t4, $v1, 4
    t7 = a3 << 1;                                               // 0x0014fe08: sll $t7, $a3, 1
    t1 = *(int32_t*)(t3);                                       // 0x0014fe0c: lw $t1, 0($t3)
    if (t4 <= 0) goto label_0x14fea0;                           // 0x0014fe10: blez $t4, 0x14fea0
    a2 = *(int32_t*)(t6);                                       // 0x0014fe14: lw $a2, 0($t6)
    goto label_0x14fe28;                                        // 0x0014fe18: b 0x14fe28
    a2 = *(int32_t*)(t6);                                       // 0x0014fe20: lw $a2, 0($t6)
label_0x14fe28:
    a1 = t7 + a3;                                               // 0x0014fe28: addu $a1, $t7, $a3
    a1 = a1 << 7;                                               // 0x0014fe2c: sll $a1, $a1, 7
    v0 = a0 << 1;                                               // 0x0014fe34: sll $v0, $a0, 1
    v1 = a0 << 0xa;                                             // 0x0014fe38: sll $v1, $a0, 0xa
    v0 = v0 + a0;                                               // 0x0014fe3c: addu $v0, $v0, $a0
    v1 = a2 + v1;                                               // 0x0014fe40: addu $v1, $a2, $v1
    v0 = v0 << 8;                                               // 0x0014fe44: sll $v0, $v0, 8
    a2 = v1 + 3;                                                // 0x0014fe48: addiu $a2, $v1, 3
    v0 = v0 + a1;                                               // 0x0014fe4c: addu $v0, $v0, $a1
    if (a3 <= 0) goto label_0x14fe90;                           // 0x0014fe50: blez $a3, 0x14fe90
    a0 = v0 + t1;                                               // 0x0014fe54: addu $a0, $v0, $t1
label_0x14fe58:
    a1 = 0xff;                                                  // 0x0014fe58: addiu $a1, $zero, 0xff
    /* nop */                                                   // 0x0014fe5c: nop 
label_0x14fe60:
    v1 = *(uint8_t*)(a0);                                       // 0x0014fe60: lbu $v1, 0($a0)
    a0 = a0 + 1;                                                // 0x0014fe64: addiu $a0, $a0, 1
    a1 = a1 + -1;                                               // 0x0014fe68: addiu $a1, $a1, -1
    v1 = t5 + v1;                                               // 0x0014fe6c: addu $v1, $t5, $v1
    v0 = *(uint8_t*)(v1);                                       // 0x0014fe70: lbu $v0, 0($v1)
    *(uint8_t*)(a2) = v0;                                       // 0x0014fe74: sb $v0, 0($a2)
    if (a1 >= 0) goto label_0x14fe60;                           // 0x0014fe78: bgez $a1, 0x14fe60
    a2 = a2 + 4;                                                // 0x0014fe7c: addiu $a2, $a2, 4
    t0 = t0 + 1;                                                // 0x0014fe80: addiu $t0, $t0, 1
    v0 = (t0 < a3) ? 1 : 0;                                     // 0x0014fe84: slt $v0, $t0, $a3
    if (v0 != 0) goto label_0x14fe58;                           // 0x0014fe88: bnez $v0, 0x14fe58
    a0 = a0 + 0x80;                                             // 0x0014fe8c: addiu $a0, $a0, 0x80
label_0x14fe90:
    t2 = t2 + 1;                                                // 0x0014fe90: addiu $t2, $t2, 1
    v0 = (t2 < t4) ? 1 : 0;                                     // 0x0014fe94: slt $v0, $t2, $t4
    /* bnezl $v0, 0x14fe20 */                                   // 0x0014fe98: bnezl $v0, 0x14fe20
    t1 = *(int32_t*)(t3);                                       // 0x0014fe9c: lw $t1, 0($t3)
label_0x14fea0:
    return;                                                     // 0x0014fea0: jr $ra
    /* nop */                                                   // 0x0014fea4: nop 
}