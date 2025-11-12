void func_001a19a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((gp) + -0x6430);                           // 0x001a19a0: lw $v1, -0x6430($gp)
    v0 = a0 << 4;                                               // 0x001a19a4: sll $v0, $a0, 4
    v0 = v0 - a0;                                               // 0x001a19a8: subu $v0, $v0, $a0
    v0 = v0 << 3;                                               // 0x001a19ac: sll $v0, $v0, 3
    v1 = v1 + v0;                                               // 0x001a19b0: addu $v1, $v1, $v0
    v0 = *(uint8_t*)(v1);                                       // 0x001a19b4: lbu $v0, 0($v1)
    if (v0 != 0) goto label_0x1a19c8;                           // 0x001a19b8: bnez $v0, 0x1a19c8
    goto label_0x1a19e4;                                        // 0x001a19c0: b 0x1a19e4
    /* nop */                                                   // 0x001a19c4: nop 
label_0x1a19c8:
    v1 = *(uint16_t*)((v1) + 2);                                // 0x001a19c8: lhu $v1, 2($v1)
    if (v1 == 0) goto label_0x1a19e4;                           // 0x001a19cc: beqz $v1, 0x1a19e4
    v0 = 0 | 0x8000;                                            // 0x001a19d4: ori $v0, $zero, 0x8000
    if (v1 != v0) goto label_0x1a19e4;                          // 0x001a19d8: bne $v1, $v0, 0x1a19e4
    v0 = 1;                                                     // 0x001a19dc: addiu $v0, $zero, 1
label_0x1a19e4:
    return;                                                     // 0x001a19e4: jr $ra
    /* nop */                                                   // 0x001a19e8: nop 
}