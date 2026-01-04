/** @category: game/init @status: complete @author: caprado */
void func_001afe50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    goto label_0x1afe88;                                        // 0x001afe54: b 0x1afe88
    t1 = 1;                                                     // 0x001afe58: addiu $t1, $zero, 1
label_0x1afe5c:
    a3 = *(uint8_t*)(a0);                                       // 0x001afe5c: lbu $a3, 0($a0)
    t2 = t2 + 1;                                                // 0x001afe60: addiu $t2, $t2, 1
    v1 = a3 & 0x1f;                                             // 0x001afe64: andi $v1, $a3, 0x1f
    a0 = a0 + 1;                                                // 0x001afe68: addiu $a0, $a0, 1
    t0 = t1 << v1;                                              // 0x001afe6c: sllv $t0, $t1, $v1
    v1 = a3 >> 5;                                               // 0x001afe70: sra $v1, $a3, 5
    v1 = v1 << 2;                                               // 0x001afe74: sll $v1, $v1, 2
    a3 = a1 + v1;                                               // 0x001afe78: addu $a3, $a1, $v1
    v1 = *(int32_t*)(a3);                                       // 0x001afe7c: lw $v1, 0($a3)
    v1 = v1 | t0;                                               // 0x001afe80: or $v1, $v1, $t0
    *(uint32_t*)(a3) = v1;                                      // 0x001afe84: sw $v1, 0($a3)
label_0x1afe88:
    v1 = (t2 < a2) ? 1 : 0;                                     // 0x001afe88: slt $v1, $t2, $a2
    if (v1 != 0) goto label_0x1afe5c;                           // 0x001afe8c: bnez $v1, 0x1afe5c
    /* nop */                                                   // 0x001afe90: nop 
    return;                                                     // 0x001afe94: jr $ra
    /* nop */                                                   // 0x001afe98: nop 
}