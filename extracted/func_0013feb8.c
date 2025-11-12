void func_0013feb8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)((a0) + 0x10);                              // 0x0013feb8: lw $v0, 0x10($a0)
    a3 = *(int32_t*)((a0) + 0xc);                               // 0x0013fec0: lw $a3, 0xc($a0)
    v0 = v0 + -1;                                               // 0x0013fec4: addiu $v0, $v0, -1
    if (v0 <= 0) goto label_0x13ff00;                           // 0x0013fec8: blez $v0, 0x13ff00
    *(uint32_t*)((a0) + 0x14) = a3;                             // 0x0013fecc: sw $a3, 0x14($a0)
    /* nop */                                                   // 0x0013fed4: nop 
label_0x13fed8:
    *(uint32_t*)((a1) + 0xc) = 0;                               // 0x0013fed8: sw $zero, 0xc($a1)
    a2 = a2 + 1;                                                // 0x0013fedc: addiu $a2, $a2, 1
    v1 = a1 + 0x10;                                             // 0x0013fee0: addiu $v1, $a1, 0x10
    *(uint32_t*)((a1) + 8) = 0;                                 // 0x0013fee4: sw $zero, 8($a1)
    v0 = *(int32_t*)((a0) + 0x10);                              // 0x0013fee8: lw $v0, 0x10($a0)
    *(uint32_t*)(a1) = v1;                                      // 0x0013feec: sw $v1, 0($a1)
    v0 = v0 + -1;                                               // 0x0013fef0: addiu $v0, $v0, -1
    v0 = (a2 < v0) ? 1 : 0;                                     // 0x0013fef4: slt $v0, $a2, $v0
    if (v0 != 0) goto label_0x13fed8;                           // 0x0013fef8: bnez $v0, 0x13fed8
label_0x13ff00:
    v0 = a2 << 4;                                               // 0x0013ff00: sll $v0, $a2, 4
    a2 = 3;                                                     // 0x0013ff04: addiu $a2, $zero, 3
    v0 = v0 + a3;                                               // 0x0013ff08: addu $v0, $v0, $a3
    a0 = a0 + 0x24;                                             // 0x0013ff0c: addiu $a0, $a0, 0x24
    *(uint32_t*)((v0) + 0xc) = 0;                               // 0x0013ff10: sw $zero, 0xc($v0)
    *(uint32_t*)(v0) = 0;                                       // 0x0013ff14: sw $zero, 0($v0)
    *(uint32_t*)((v0) + 8) = 0;                                 // 0x0013ff18: sw $zero, 8($v0)
    /* nop */                                                   // 0x0013ff1c: nop 
label_0x13ff20:
    a2 = a2 + -1;                                               // 0x0013ff20: addiu $a2, $a2, -1
    *(uint32_t*)(a0) = 0;                                       // 0x0013ff24: sw $zero, 0($a0)
    /* nop */                                                   // 0x0013ff28: nop 
    /* nop */                                                   // 0x0013ff2c: nop 
    /* nop */                                                   // 0x0013ff30: nop 
    if (a2 >= 0) goto label_0x13ff20;                           // 0x0013ff34: bgez $a2, 0x13ff20
    a0 = a0 + -4;                                               // 0x0013ff38: addiu $a0, $a0, -4
    return;                                                     // 0x0013ff3c: jr $ra
    /* nop */                                                   // 0x0013ff40: nop 
}