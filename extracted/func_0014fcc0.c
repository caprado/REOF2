void func_0014fcc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0014fcc0: addiu $sp, $sp, -0x10
    v1 = *(int32_t*)((t7) + 4);                                 // 0x0014fcd8: lw $v1, 4($t7)
    v0 = *(int32_t*)((t7) + 8);                                 // 0x0014fcdc: lw $v0, 8($t7)
    a1 = (v1 < 0) ? 1 : 0;                                      // 0x0014fce0: slti $a1, $v1, 0
    a3 = v1 + 0xf;                                              // 0x0014fce4: addiu $a3, $v1, 0xf
    a2 = v0 + 0x1f;                                             // 0x0014fce8: addiu $a2, $v0, 0x1f
    a0 = (v0 < 0) ? 1 : 0;                                      // 0x0014fcec: slti $a0, $v0, 0
    if (a1 != 0) v1 = a3;                                       // 0x0014fcf0: movn $v1, $a3, $a1
    a1 = *(int32_t*)(t7);                                       // 0x0014fcf4: lw $a1, 0($t7)
    if (a0 != 0) v0 = a2;                                       // 0x0014fcf8: movn $v0, $a2, $a0
    t8 = v1 >> 4;                                               // 0x0014fcfc: sra $t8, $v1, 4
    t1 = v0 >> 5;                                               // 0x0014fd00: sra $t1, $v0, 5
    t4 = *(int32_t*)((t9) + 0xc);                               // 0x0014fd04: lw $t4, 0xc($t9)
    if (t8 <= 0) goto label_0x14fdc0;                           // 0x0014fd08: blez $t8, 0x14fdc0
    s0 = t1 << 1;                                               // 0x0014fd0c: sll $s0, $t1, 1
    goto label_0x14fd20;                                        // 0x0014fd10: b 0x14fd20
    /* nop */                                                   // 0x0014fd1c: nop 
label_0x14fd20:
    v1 = s0 + t1;                                               // 0x0014fd20: addu $v1, $s0, $t1
    v1 = v1 << 7;                                               // 0x0014fd24: sll $v1, $v1, 7
    v0 = a0 << 1;                                               // 0x0014fd2c: sll $v0, $a0, 1
    v0 = v0 + a0;                                               // 0x0014fd30: addu $v0, $v0, $a0
    v0 = v0 << 8;                                               // 0x0014fd34: sll $v0, $v0, 8
    v0 = v0 + v1;                                               // 0x0014fd38: addu $v0, $v0, $v1
    if (t1 <= 0) goto label_0x14fdb0;                           // 0x0014fd3c: blez $t1, 0x14fdb0
    a2 = v0 + a1;                                               // 0x0014fd40: addu $a2, $v0, $a1
    a3 = t5 << 6;                                               // 0x0014fd44: sll $a3, $t5, 6
    t3 = t4 << 4;                                               // 0x0014fd48: sll $t3, $t4, 4
    /* nop */                                                   // 0x0014fd4c: nop 
label_0x14fd50:
    v0 = *(int32_t*)(t9);                                       // 0x0014fd50: lw $v0, 0($t9)
    v0 = a3 + v0;                                               // 0x0014fd58: addu $v0, $a3, $v0
    a0 = v0 + 3;                                                // 0x0014fd5c: addiu $a0, $v0, 3
label_0x14fd60:
    a1 = 0xf;                                                   // 0x0014fd60: addiu $a1, $zero, 0xf
    /* nop */                                                   // 0x0014fd64: nop 
label_0x14fd68:
    v1 = *(uint8_t*)(a2);                                       // 0x0014fd68: lbu $v1, 0($a2)
    a2 = a2 + 1;                                                // 0x0014fd6c: addiu $a2, $a2, 1
    a1 = a1 + -1;                                               // 0x0014fd70: addiu $a1, $a1, -1
    v1 = t6 + v1;                                               // 0x0014fd74: addu $v1, $t6, $v1
    v0 = *(uint8_t*)(v1);                                       // 0x0014fd78: lbu $v0, 0($v1)
    *(uint8_t*)(a0) = v0;                                       // 0x0014fd7c: sb $v0, 0($a0)
    if (a1 >= 0) goto label_0x14fd68;                           // 0x0014fd80: bgez $a1, 0x14fd68
    a0 = a0 + 4;                                                // 0x0014fd84: addiu $a0, $a0, 4
    t0 = t0 + 1;                                                // 0x0014fd88: addiu $t0, $t0, 1
    v0 = a0 + t4;                                               // 0x0014fd8c: addu $v0, $a0, $t4
    v1 = (t0 < 0x10) ? 1 : 0;                                   // 0x0014fd90: slti $v1, $t0, 0x10
    if (v1 != 0) goto label_0x14fd60;                           // 0x0014fd94: bnez $v1, 0x14fd60
    a0 = v0 + -0x40;                                            // 0x0014fd98: addiu $a0, $v0, -0x40
    t2 = t2 + 1;                                                // 0x0014fd9c: addiu $t2, $t2, 1
    a2 = a2 + 0x80;                                             // 0x0014fda0: addiu $a2, $a2, 0x80
    v0 = (t2 < t1) ? 1 : 0;                                     // 0x0014fda4: slt $v0, $t2, $t1
    if (v0 != 0) goto label_0x14fd50;                           // 0x0014fda8: bnez $v0, 0x14fd50
    a3 = a3 + t3;                                               // 0x0014fdac: addu $a3, $a3, $t3
label_0x14fdb0:
    t5 = t5 + 1;                                                // 0x0014fdb0: addiu $t5, $t5, 1
    v0 = (t5 < t8) ? 1 : 0;                                     // 0x0014fdb4: slt $v0, $t5, $t8
    /* bnezl $v0, 0x14fd18 */                                   // 0x0014fdb8: bnezl $v0, 0x14fd18
    a1 = *(int32_t*)(t7);                                       // 0x0014fdbc: lw $a1, 0($t7)
label_0x14fdc0:
    return;                                                     // 0x0014fdc4: jr $ra
    sp = sp + 0x10;                                             // 0x0014fdc8: addiu $sp, $sp, 0x10
}