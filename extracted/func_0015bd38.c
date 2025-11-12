void func_0015bd38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x30;                                            // 0x0015bd38: addiu $sp, $sp, -0x30
    v0 = 8 << 16;                                               // 0x0015bd3c: lui $v0, 8
    v0 = v0 | 0x40d0;                                           // 0x0015bd5c: ori $v0, $v0, 0x40d0
    v1 = *(int32_t*)((a1) + 0xc);                               // 0x0015bd60: lw $v1, 0xc($a1)
    a3 = *(int32_t*)((a1) + 8);                                 // 0x0015bd64: lw $a3, 8($a1)
    local_4 = v0;                                               // 0x0015bd68: sw $v0, 4($sp)
    v0 = a3 << 3;                                               // 0x0015bd70: sll $v0, $a3, 3
    v0 = v0 + a3;                                               // 0x0015bd74: addu $v0, $v0, $a3
    v1 = (unsigned)v0 >> 0x1f;                                  // 0x0015bd78: srl $v1, $v0, 0x1f
    v0 = v0 + v1;                                               // 0x0015bd7c: addu $v0, $v0, $v1
    v0 = v0 >> 1;                                               // 0x0015bd80: sra $v0, $v0, 1
    v0 = v0 + 0x2840;                                           // 0x0015bd84: addiu $v0, $v0, 0x2840
    func_0015d300();  // 0x15d260                                // 0x0015bd8c: jal 0x15d260
    local_0 = v0;                                               // 0x0015bd90: sw $v0, 0($sp)
    *(uint32_t*)(s0) = v0;                                      // 0x0015bd98: sw $v0, 0($s0)
    func_0015d300();  // 0x15d260                                // 0x0015bd9c: jal 0x15d260
    a1 = local_4;                                               // 0x0015bda0: lw $a1, 4($sp)
    v0 = *(int32_t*)(s0);                                       // 0x0015bda8: lw $v0, 0($s0)
    if (v0 == 0) goto label_0x15bdbc;                           // 0x0015bdac: beqz $v0, 0x15bdbc
    *(uint32_t*)((s0) + 4) = v1;                                // 0x0015bdb0: sw $v1, 4($s0)
    if (v1 != 0) goto label_0x15bdc4;                           // 0x0015bdb4: bnez $v1, 0x15bdc4
label_0x15bdbc:
    s2 = -1;                                                    // 0x0015bdbc: addiu $s2, $zero, -1
label_0x15bdc4:
    return;                                                     // 0x0015bdd4: jr $ra
    sp = sp + 0x30;                                             // 0x0015bdd8: addiu $sp, $sp, 0x30
}