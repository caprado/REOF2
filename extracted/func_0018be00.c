void func_0018be00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t0 = 0x28 << 16;                                            // 0x0018be00: lui $t0, 0x28
    *(uint32_t*)((a0) + 0x38) = 0;                              // 0x0018be04: sw $zero, 0x38($a0)
    goto label_0x18bea0;                                        // 0x0018be0c: b 0x18bea0
    t0 = t0 + 0x4960;                                           // 0x0018be10: addiu $t0, $t0, 0x4960
label_0x18be14:
    a1 = v1 << 2;                                               // 0x0018be14: sll $a1, $v1, 2
    a2 = *(uint8_t*)((a2) + 0x60);                              // 0x0018be18: lbu $a2, 0x60($a2)
    a1 = a0 + a1;                                               // 0x0018be1c: addu $a1, $a0, $a1
    a3 = a1 + 0x80;                                             // 0x0018be20: addiu $a3, $a1, 0x80
    *(uint32_t*)((a1) + 0x80) = 0;                              // 0x0018be24: sw $zero, 0x80($a1)
    a1 = a2 << 3;                                               // 0x0018be28: sll $a1, $a2, 3
    a1 = a1 + a2;                                               // 0x0018be2c: addu $a1, $a1, $a2
    a1 = a1 << 1;                                               // 0x0018be30: sll $a1, $a1, 1
    a1 = a1 + a2;                                               // 0x0018be34: addu $a1, $a1, $a2
    a1 = a1 << 2;                                               // 0x0018be38: sll $a1, $a1, 2
    t1 = t0 + a1;                                               // 0x0018be3c: addu $t1, $t0, $a1
    a1 = *(int32_t*)((t1) + 0x44);                              // 0x0018be40: lw $a1, 0x44($t1)
    if (a1 == 0) goto label_0x18be9c;                           // 0x0018be44: beqz $a1, 0x18be9c
    /* nop */                                                   // 0x0018be48: nop 
    *(uint32_t*)(a3) = a1;                                      // 0x0018be4c: sw $a1, 0($a3)
    a3 = *(int32_t*)((a0) + 0x38);                              // 0x0018be50: lw $a3, 0x38($a0)
    goto label_0x18be74;                                        // 0x0018be54: b 0x18be74
label_0x18be5c:
    a1 = *(int32_t*)((t1) + 0x44);                              // 0x0018be5c: lw $a1, 0x44($t1)
    a2 = a0 + a2;                                               // 0x0018be60: addu $a2, $a0, $a2
    a2 = *(int32_t*)((a2) + 0x100);                             // 0x0018be64: lw $a2, 0x100($a2)
    if (a2 == a1) goto label_0x18be9c;                          // 0x0018be68: beq $a2, $a1, 0x18be9c
    /* nop */                                                   // 0x0018be6c: nop 
    t2 = t2 + 1;                                                // 0x0018be70: addiu $t2, $t2, 1
label_0x18be74:
    a1 = (t2 < a3) ? 1 : 0;                                     // 0x0018be74: slt $a1, $t2, $a3
    if (a1 != 0) goto label_0x18be5c;                           // 0x0018be78: bnez $a1, 0x18be5c
    a2 = t2 << 2;                                               // 0x0018be7c: sll $a2, $t2, 2
    a1 = *(int32_t*)((a0) + 0x38);                              // 0x0018be80: lw $a1, 0x38($a0)
    a3 = *(int32_t*)((t1) + 0x44);                              // 0x0018be84: lw $a3, 0x44($t1)
    a2 = a1 + 1;                                                // 0x0018be88: addiu $a2, $a1, 1
    a1 = a1 << 2;                                               // 0x0018be8c: sll $a1, $a1, 2
    *(uint32_t*)((a0) + 0x38) = a2;                             // 0x0018be90: sw $a2, 0x38($a0)
    a1 = a0 + a1;                                               // 0x0018be94: addu $a1, $a0, $a1
    *(uint32_t*)((a1) + 0x100) = a3;                            // 0x0018be98: sw $a3, 0x100($a1)
label_0x18be9c:
    v1 = v1 + 1;                                                // 0x0018be9c: addiu $v1, $v1, 1
label_0x18bea0:
    a1 = *(int32_t*)((a0) + 0x34);                              // 0x0018bea0: lw $a1, 0x34($a0)
    a1 = (v1 < a1) ? 1 : 0;                                     // 0x0018bea4: slt $a1, $v1, $a1
    if (a1 != 0) goto label_0x18be14;                           // 0x0018bea8: bnez $a1, 0x18be14
    a2 = a0 + v1;                                               // 0x0018beac: addu $a2, $a0, $v1
    return;                                                     // 0x0018beb0: jr $ra
    /* nop */                                                   // 0x0018beb4: nop 
}