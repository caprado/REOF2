void func_001cb640() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)(a1);                                       // 0x001cb640: lw $v1, 0($a1)
    *(uint32_t*)(a0) = v1;                                      // 0x001cb648: sw $v1, 0($a0)
    v1 = *(uint8_t*)((a0) + 8);                                 // 0x001cb64c: lbu $v1, 8($a0)
    v1 = v1 << 2;                                               // 0x001cb650: sll $v1, $v1, 2
    v1 = v1 + a1;                                               // 0x001cb654: addu $v1, $v1, $a1
    v1 = *(int32_t*)((v1) + -4);                                // 0x001cb658: lw $v1, -4($v1)
    goto label_0x1cb6ac;                                        // 0x001cb65c: b 0x1cb6ac
    *(uint32_t*)((a0) + 4) = v1;                                // 0x001cb660: sw $v1, 4($a0)
label_0x1cb664:
    v1 = t1 + -1;                                               // 0x001cb664: addiu $v1, $t1, -1
    a3 = a1 + a2;                                               // 0x001cb668: addu $a3, $a1, $a2
    if (v1 >= 0) goto label_0x1cb67c;                           // 0x001cb66c: bgez $v1, 0x1cb67c
    t0 = *(int32_t*)(a3);                                       // 0x001cb670: lw $t0, 0($a3)
    goto label_0x1cb684;                                        // 0x001cb674: b 0x1cb684
    *(uint32_t*)(t0) = 0;                                       // 0x001cb678: sw $zero, 0($t0)
label_0x1cb67c:
    v1 = *(int32_t*)((a3) + -4);                                // 0x001cb67c: lw $v1, -4($a3)
    *(uint32_t*)(t0) = v1;                                      // 0x001cb680: sw $v1, 0($t0)
label_0x1cb684:
    v1 = *(uint8_t*)((a0) + 8);                                 // 0x001cb684: lbu $v1, 8($a0)
    a2 = t1 + 1;                                                // 0x001cb688: addiu $a2, $t1, 1
    at = (a2 < v1) ? 1 : 0;                                     // 0x001cb68c: slt $at, $a2, $v1
    if (at == 0) goto label_0x1cb6a4;                           // 0x001cb690: beqz $at, 0x1cb6a4
    /* nop */                                                   // 0x001cb694: nop 
    v1 = *(int32_t*)((a3) + 4);                                 // 0x001cb698: lw $v1, 4($a3)
    goto label_0x1cb6a8;                                        // 0x001cb69c: b 0x1cb6a8
    *(uint32_t*)((t0) + 4) = v1;                                // 0x001cb6a0: sw $v1, 4($t0)
label_0x1cb6a4:
    *(uint32_t*)((t0) + 4) = 0;                                 // 0x001cb6a4: sw $zero, 4($t0)
label_0x1cb6a8:
    t1 = t1 + 1;                                                // 0x001cb6a8: addiu $t1, $t1, 1
label_0x1cb6ac:
    v1 = *(uint8_t*)((a0) + 8);                                 // 0x001cb6ac: lbu $v1, 8($a0)
    v1 = (t1 < v1) ? 1 : 0;                                     // 0x001cb6b0: slt $v1, $t1, $v1
    if (v1 != 0) goto label_0x1cb664;                           // 0x001cb6b4: bnez $v1, 0x1cb664
    a2 = t1 << 2;                                               // 0x001cb6b8: sll $a2, $t1, 2
    return;                                                     // 0x001cb6bc: jr $ra
    /* nop */                                                   // 0x001cb6c0: nop 
}