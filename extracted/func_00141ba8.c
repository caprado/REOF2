void func_00141ba8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00141ba8: addiu $sp, $sp, -0x20
    v0 = ((unsigned)s1 < (unsigned)6) ? 1 : 0;                  // 0x00141bb4: sltiu $v0, $s1, 6
    if (v0 != 0) goto label_0x141bdc;                           // 0x00141bc8: bnez $v0, 0x141bdc
    a0 = 0x22 << 16;                                            // 0x00141bd0: lui $a0, 0x22
    func_001415b8();  // 0x141568                                // 0x00141bd4: jal 0x141568
    a0 = &str_00226550;  // "1071302:SVM_ExecSvrFuncId:illegal svtype" // 0x00141bd8: addiu $a0, $a0, 0x6550
label_0x141bdc:
    if (s0 < 0) goto label_0x141bec;                            // 0x00141bdc: bltz $s0, 0x141bec
    v0 = (s1 < 8) ? 1 : 0;                                      // 0x00141be0: slti $v0, $s1, 8
    if (v0 != 0) goto label_0x141bfc;                           // 0x00141be4: bnez $v0, 0x141bfc
    v0 = s0 << 1;                                               // 0x00141be8: sll $v0, $s0, 1
label_0x141bec:
    a0 = 0x22 << 16;                                            // 0x00141bec: lui $a0, 0x22
    func_001415b8();  // 0x141568                                // 0x00141bf0: jal 0x141568
    a0 = &str_00226578;  // "Invalid modion type -- ignored(%d)" // 0x00141bf4: addiu $a0, $a0, 0x6578
    v0 = s0 << 1;                                               // 0x00141bf8: sll $v0, $s0, 1
label_0x141bfc:
    v0 = v0 + s0;                                               // 0x00141bfc: addu $v0, $v0, $s0
    v0 = v0 << 1;                                               // 0x00141c00: sll $v0, $v0, 1
    v0 = v0 + s1;                                               // 0x00141c04: addu $v0, $v0, $s1
    v0 = v0 << 3;                                               // 0x00141c08: sll $v0, $v0, 3
    at = 0x25 << 16;                                            // 0x00141c0c: lui $at, 0x25
    at = at + 0x5fa0;                                           // 0x00141c10: addiu $at, $at, 0x5fa0
    v0 = at + v0;                                               // 0x00141c14: addu $v0, $at, $v0
    v1 = *(int32_t*)(v0);                                       // 0x00141c18: lw $v1, 0($v0)
    /* beqzl $v1, 0x141c34 */                                   // 0x00141c1c: beqzl $v1, 0x141c34
    /* call function at address in v1 */                        // 0x00141c24: jalr $v1
    a0 = *(int32_t*)((v0) + 4);                                 // 0x00141c28: lw $a0, 4($v0)
    return;                                                     // 0x00141c44: jr $ra
    sp = sp + 0x20;                                             // 0x00141c48: addiu $sp, $sp, 0x20
}