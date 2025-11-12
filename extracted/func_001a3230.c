void func_001a3230() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = -1;                                                    // 0x001a3230: addiu $v0, $zero, -1
    if (a1 == v0) goto label_0x1a328c;                          // 0x001a3234: beq $a1, $v0, 0x1a328c
    /* nop */                                                   // 0x001a3238: nop 
    v1 = *(int32_t*)((a0) + 4);                                 // 0x001a323c: lw $v1, 4($a0)
    goto label_0x1a3278;                                        // 0x001a3244: b 0x1a3278
    a0 = a0 + 0xc;                                              // 0x001a3248: addiu $a0, $a0, 0xc
label_0x1a324c:
    v0 = *(int32_t*)(a0);                                       // 0x001a324c: lw $v0, 0($a0)
    if (v0 != a1) goto label_0x1a326c;                          // 0x001a3250: bne $v0, $a1, 0x1a326c
    /* nop */                                                   // 0x001a3254: nop 
    if (a2 != 0) goto label_0x1a3268;                           // 0x001a3258: bnez $a2, 0x1a3268
    goto label_0x1a32d0;                                        // 0x001a3260: b 0x1a32d0
    /* nop */                                                   // 0x001a3264: nop 
label_0x1a3268:
    a2 = a2 + -1;                                               // 0x001a3268: addiu $a2, $a2, -1
label_0x1a326c:
    v0 = *(int32_t*)((a0) + 8);                                 // 0x001a326c: lw $v0, 8($a0)
    a3 = a3 + 1;                                                // 0x001a3270: addiu $a3, $a3, 1
    a0 = a0 + v0;                                               // 0x001a3274: addu $a0, $a0, $v0
label_0x1a3278:
    v0 = (a3 < v1) ? 1 : 0;                                     // 0x001a3278: slt $v0, $a3, $v1
    if (v0 != 0) goto label_0x1a324c;                           // 0x001a327c: bnez $v0, 0x1a324c
    /* nop */                                                   // 0x001a3280: nop 
    goto label_0x1a32d0;                                        // 0x001a3284: b 0x1a32d0
label_0x1a328c:
    v0 = *(int32_t*)((a0) + 4);                                 // 0x001a328c: lw $v0, 4($a0)
    at = ((unsigned)a2 < (unsigned)v0) ? 1 : 0;                 // 0x001a3290: sltu $at, $a2, $v0
    if (at == 0) goto label_0x1a32cc;                           // 0x001a3294: beqz $at, 0x1a32cc
    /* nop */                                                   // 0x001a3298: nop 
    a0 = a0 + 0xc;                                              // 0x001a329c: addiu $a0, $a0, 0xc
    goto label_0x1a32b4;                                        // 0x001a32a0: b 0x1a32b4
label_0x1a32a8:
    v0 = *(int32_t*)((a0) + 8);                                 // 0x001a32a8: lw $v0, 8($a0)
    v1 = v1 + 1;                                                // 0x001a32ac: addiu $v1, $v1, 1
    a0 = a0 + v0;                                               // 0x001a32b0: addu $a0, $a0, $v0
label_0x1a32b4:
    v0 = (v1 < a2) ? 1 : 0;                                     // 0x001a32b4: slt $v0, $v1, $a2
    /* nop */                                                   // 0x001a32b8: nop 
    if (v0 != 0) goto label_0x1a32a8;                           // 0x001a32bc: bnez $v0, 0x1a32a8
    /* nop */                                                   // 0x001a32c0: nop 
    goto label_0x1a32d0;                                        // 0x001a32c4: b 0x1a32d0
label_0x1a32cc:
label_0x1a32d0:
    return;                                                     // 0x001a32d0: jr $ra
    /* nop */                                                   // 0x001a32d4: nop 
}